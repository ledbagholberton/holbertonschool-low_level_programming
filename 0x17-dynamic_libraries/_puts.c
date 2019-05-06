#include "holberton.h"
/**
 * _puts - print the string
 *
 * @str: Pointer to string
 * Return: No return
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
