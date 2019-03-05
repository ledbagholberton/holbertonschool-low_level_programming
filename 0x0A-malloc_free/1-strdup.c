#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - CLone astring in a memory space
 * @str: String to be duplicated
 *
 * Return: Pointer to new string.
 */

char *_strdup(char *str)
{
	char *newstr;
	int cont;

	if (!str)
		return (NULL);
	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}
	if (cont == 0)
		return (0);
	newstr = malloc(cont * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (cont = 0; str[cont] != '\0'; cont++)
	{
		newstr[cont] = str[cont];
	}
	return (newstr);
}
