#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_all - free memory space in case of failure
 * @buffer: Space to free
 * @cont: counter
 *
 * Return: Pointer double to grid.
 */

void free_all(char **buffer, int cont)
{
	int i;

	for (i = 0; i < cont; i++)
		free(buffer[i]);
	free(buffer);
}

/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Pointer to array of strings
 */

char **strtow(char *str)
{
	int i, j, k, cont, cont_word;
	char **array_str;

	for (j = 0; str[j] != '\0'; j++)
		for (i = 0; str[i] != ' '; i++)
		{
			if (str[i - 1] >= 33 || str[i - 1] < 126)
				cont++;
		}
	cont++;
	array_str = malloc(sizeof(char *) * cont);
	if (array_str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		for (i = 0; str[i] != ' '; i++)
		{
			if (str[i - 1] >= 33 || str[i - 1] < 126)
			{
				for (k = 0; str[i + k] != ' ' || str[i + k] != '\0'; k++)
					cont_word++;
				array_str[j] = malloc(sizeof(char) * cont_word);
				if (array_str[j] == NULL)
				{
				free_all(array_str, cont);
				return (NULL);
				}
			}
		}

	cont = 0;
	for (j = 0; str[j] != '\0'; j++)
		for (i = 0; str[i] != ' '; i++)
		{
			array_str[j][i] = str[cont];
			cont++;
		}
	return (array_str);
}
