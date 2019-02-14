#include "holberton.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * void: No input variables
 * Return: No return
 */

void print_numbers(void)
{
	int cont;

	for (cont = 0; cont <= 9 ; cont++)
		_putchar(cont + '0');
	_putchar('\n');
}
