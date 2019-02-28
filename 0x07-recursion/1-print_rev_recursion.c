#include "holberton.h"
/**
 * _print_rev_recursion - REturns reverse string
 *
 * @s: Pointer to string
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	char *aux;

	aux = s;
	if (*aux != '\0')
		_print_rev_recursion(aux + 1);
	aux--;
	_putchar(*aux);
}
