#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - CLone astring in a memory space
 * @str: String to be duplicated
 *
 * Return: Pointer to new string.
 */

char *_strdup(char *str)
{
	char *newstr;
	int cont, cont2;

	if (!str)
		return (NULL);
	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}
/*	printf("LOngitud %d\n",cont);*/
	newstr = malloc(cont * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (cont2 = 0; cont2 <= cont + 1; cont2++)
	{
		newstr[cont2] = str[cont2];
	}
	return (newstr);
}
