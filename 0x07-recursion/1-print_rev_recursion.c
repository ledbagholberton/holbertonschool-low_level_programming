#include "holberton.h"
/**
 * _print_rev_recursion - REturns reverse string
 *
 * @s: Pointer to string
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}
