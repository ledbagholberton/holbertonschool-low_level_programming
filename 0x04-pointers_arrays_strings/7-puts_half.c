#include "holberton.h"

/**
 * puts_half - print only the half of string
 *
 * @str: Pointer to string
 * Return: No return
 */
void puts_half(char *str)
{
	char *strptr, *ini;
	int j, i;

	strptr = str;
	ini = str;
	i = 0;
	while (*strptr != '\0')
	{
		strptr++;
		i++;
	}
	if (i % 2 == 0)
	{
		j = i - (i / 2);
	}
	else
	{
	j = ((i + 1) / 2);
	}
	ini = ini + j;
	do {
		_putchar(*ini);
		ini++;
	}
	while (ini < strptr);
	_putchar('\n');
}
