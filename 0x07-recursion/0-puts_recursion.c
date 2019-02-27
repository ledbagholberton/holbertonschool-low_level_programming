#include "holberton.h"
/**
 * _puts_recursion - Print a string using recursivity
 *
 * @s: Pointer to string to be printed
 * Return: No return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
