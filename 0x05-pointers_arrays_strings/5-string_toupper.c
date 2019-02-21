#include "holberton.h"
/**
 * string_toupper - String to change from lowercase to UPPERCASE
 *
 * @str: Address of string
 * Return: Return pointer to string
 */

char *string_toupper(char *str)
{
	char *aux;

	aux = str;
	while (*aux != '\0')
	{
		if (*aux >= 97 && *aux <= 122)
			*aux = *aux - 32;
		aux++;
	}
	return (str);
}
