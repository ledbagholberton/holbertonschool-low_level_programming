#include "holberton.h"
/**
 * cap_string - capitalize all the words - exceptions
 *
 * @str: Address of string
 * Return: Pointer string
 */

char *cap_string(char *str)
{
	char *aux;

	aux = str;
	while (*aux != '\0')
	{
		if (*(aux - 1) == 32 || *(aux - 1) == 9 || *(aux - 1) == 10 ||
*(aux - 1) == 44 || *(aux - 1) == 59 || *(aux - 1) == 46 || *(aux - 1) == 33 ||
*(aux - 1) == 63 || *(aux - 1) == 34 || *(aux - 1) == 40 || *(aux - 1) == 41 ||
*(aux - 1) == 123 || *(aux - 1) == 125)
		{
			if (*aux >= 97 && *aux <= 122)
				*aux = *aux - 32;
		}
		aux++;
	}
	return (str);
}
