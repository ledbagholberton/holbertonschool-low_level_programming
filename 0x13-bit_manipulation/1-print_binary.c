#include "holberton.h"
#include <stdio.h>
/**
 * my_print_binary - binary print.
 *@n: integer
 * Return: Always 0.
 */
void my_print_binary(unsigned long int n)
{
	int a;

	if (n != 0)
	{
	my_print_binary(n >> 1);
	a = n & 1;
	if (a == 1)
		_putchar('1');
	else
		_putchar('0');
	}
}

/**
 * print_binary - binary print.
 *@n: integer
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		my_print_binary(n);
}
