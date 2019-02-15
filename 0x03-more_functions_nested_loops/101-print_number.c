#include "holberton.h"
#include <stdio.h>

/**
 * print_number - print the number
 *
 * @n: number to show
 * Return: No return
 */
void print_number(int n)
{
	int d, c, div, num, signo, tam, a, b, num2;

	signo = 0;
	tam = 1;
	num = n;
	num2 = n;
	c = 1;
	if (n != 0)
	{
		if (n < 0)
		{
			signo = 1;
			num2 = -1 * num2;
		}
		a = num / 10;
		while (a != 0)
		{
			a = num / (tam * 10);
			tam = tam * 10;
			c++;
		}
		if (signo == 1)
			_putchar(45);
		c = c - 1;
		for (b = c - 1; b >= 0; b--)
		{
			div = 1;
			for (d = b; d > 0; d--)
			{
				div = div * 10;
			}
			num = (num2 / div);
			_putchar(num + '0');
			num2 = num2 - (num * div);
		}
	}
		else
			_putchar ('0');
}
