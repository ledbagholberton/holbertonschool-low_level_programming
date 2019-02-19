#include "holberton.h"
/**
 * print_rev - print the string in reverse
 *
 * @s: Pointer to string
 * Return: No return
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--; 
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
