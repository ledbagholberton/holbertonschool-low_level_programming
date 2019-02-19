#include "holberton.h"
/**
 * puts2 - print one char out of 2
 *
 * @str: Pointer to string
 * Return: No return
 */

void puts2(char *str)
{
	char *strptr, *ini;

	strptr = str;
	ini = str;
	while (*strptr != '\0')
	{
		strptr++;
	}
	do {
		_putchar(*ini);
		ini = ini + 2;
	}
	while (ini < strptr)
	_putchar('\n');
}
