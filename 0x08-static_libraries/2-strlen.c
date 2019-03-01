#include "holberton.h"
/**
 * _strlen - value the longitud of string
 *
 * @s: Pointer to string
 * Return: longitud of string
 */

int _strlen(char *s)
{
	int i;

i = 0;

while (*s != '\0')
{
	s++;
	i++;
}
return (i);
}
