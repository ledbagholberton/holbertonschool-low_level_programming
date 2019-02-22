#include "holberton.h"
/**
 * print_number - print a number integer
 *
 * @n: Integer number
 * Return: No return
 */

void print_number(int n)
{
	int a, b, cont, divisor, num_a, num_b;

	num_a = n;
	num_b = n;
	divisor = 1;
	cont = 0;
	if (n < 0)
		_putchar('-');
	while (num_a > 0)
	{
		num_a = num_a / divisor;
		cont++;
		divisor = divisor * 10;
	}
	divisor = divisor / 10;
	for (a = 0; a <= cont; a++)
	{
		b = num_b / divisor;
		_putchar(b + '0');
		num_b = num_b % divisor;
	}
}
