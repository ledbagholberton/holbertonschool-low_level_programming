#include "holberton.h"

/**
 * print_most_numbers - print numbers 0-9 withou 2 & 4
 *
 * void: No input variables
 * Return: No return
 */
void print_most_numbers(void)
{
	int cont, a;

	for (cont = 48; cont <= 57 ; cont++)
	{
		cont != 50 && cont != 52 ? _putchar(cont) : a++;
	}
	_putchar('\n');
}
