#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse
 *
 * @s: Pointer of string
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	char *aux;

	aux = s;
	aux++;
	if (*aux = '\0')
		aux++;
	else
	{
	_print_rev_recursion(aux);
	_putchar(*aux-1);
	}
}

