#include "holberton.h"

/**
 * more_numbers - print ten times from 0-14
 *
 * void: No input variables
 * Return: No return
 */


void more_numbers(void)
{
	int a, b, uni, dec, aux;

	for (a = 1; a <= 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
		dec = b / 10;
		uni = b % 10;
		dec != 0 ? _putchar(dec + '0') : aux++;
		_putchar(uni + '0');
	}
	_putchar('\n');
	}
}
