#include "holberton.h"
/**
 * _puts_recursion - Print a string using recursivity
 *
 * @s: Pointer to string to be printed
 * Return: No return
 */

void _puts_recursion(char *s)
{
	char *aux;

	aux = s;
	_putchar(*aux);
	aux++;
	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(aux);
}
