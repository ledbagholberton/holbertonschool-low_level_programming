#include "holberton.h"

/**
 * print_sign - print the sign of input number
 *
 * @n: Bring the number to evaluate
 * Return: Return 1/0/-1 positive/0/negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
