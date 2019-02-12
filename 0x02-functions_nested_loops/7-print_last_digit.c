#include "holberton.h"

/**
 * print_last_digit - print the last digit a number
 *
 * @numero: Bring the number to be evaluated
 * Return: Returns last digit without sign
 */
int print_last_digit(int numero)
{
	int x;

	x = numero % 10;
	if (x < 0)
		x = x * -1;
	_putchar (x + '0');
	return (x);
}
