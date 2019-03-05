#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: the string 1
 * @s2: the string 2
 *
 * Return: pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	int cont, cont2, cont3;
	char *buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cont = 0; s1[cont] != '\0'; cont++)
	{
	}
	for (cont2 = 0; s2[cont2] != '\0'; cont2++)
	{
	}
	buffer = malloc(sizeof(char) * (cont + cont2));
	if (buffer == NULL)
		return (NULL);
	for (cont3 = 0; cont3 < cont; cont3++)
		buffer[cont3] = s1[cont3];
	for (; cont3 <= cont + cont2 + 2; cont3++)
		buffer[cont3] = s2[cont3 - cont];
	buffer[cont3] = '\0';
	return (buffer);
}
