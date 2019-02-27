#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse
 *
 * @s: Pointer of string
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	}
	_putchar(*(s - 1));
}
