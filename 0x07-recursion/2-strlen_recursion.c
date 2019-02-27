#include "holberton.h"
/**
 * _strlen_recursion - REturns long of string
 *
 * @s: Pointer to string
 * Return: Integer with long string
 */

int _strlen_recursion(char *s)
{
	int largo;

	largo = 1;
	if (*(s + 1) != '\0')
	{
		largo = largo + _strlen_recursion(s + 1);
	}
	return (largo);
}
