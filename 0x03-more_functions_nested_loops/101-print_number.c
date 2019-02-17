#include "holberton.h"
#include <stdio.h>

/**
 * print_number - print the number
 *
 * @n: number to show
 * Return: No return
 */

unsigned potencia(unsigned a1, unsigned b1)
{
	unsigned x, y;

	y = a1;
	if (b1 > 0)
	{
		for (x = 1; x < b1; x++)
			y = y * a1;
	}
	else
		y = 1;
	return (y);
}


void print_number(int n)
{
	int b, c, signo, tam;
	unsigned int num2, a, div, num; 

	signo = 0;
	tam = 1;
	num = n;
	num2 = n;
	c = 1;
	if (n != 0)
	{
		if (n < 0)
		{
			signo = 45;
			num2 = -1 * num2;
		}
		a = num / 10;
		while (a != 0)
		{
			a = num / (tam * 10);
			tam = tam * 10;
			c++;
		}
		if (signo == 45)
			_putchar(signo);
		for (b = c - 2; b >= 0; --b)
		{
			div = potencia(10, b);
			num = (num2 / div);
			_putchar(num + '0');
			num2 = num2 % div;
		}
	}
		else
			_putchar ('0');
}
