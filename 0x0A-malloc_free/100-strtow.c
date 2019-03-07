#include "holberton.h"
#include <stdlib.h>

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
	int k, i = 0, j, flag, cont = 0, cont_w = 0;
	char **array_str;

	for (j = 0; str[j] != '\0'; j++)
		if (str[j] == ' ')
		{
			if (str[j - 1] >= 33 && str[j - 1] < 126)
				cont++;
		}
	cont++;
	array_str = malloc(sizeof(char *) * cont);
	if (array_str == NULL)
		return (NULL);
	array_str[cont - 1] = NULL;
	j = 0;
	for (; str[j] != '\0'; j++)
	{
		flag = 0;
		cont_w = 0;
		while (str[j + cont_w] != ' ' && str[j + cont_w + 1] != ' '
		       && str[j + cont_w + 1] != '\0')
		{
			cont_w++;
			flag = 1;
		}
		if (flag == 1)
		{
			array_str[i] = malloc(sizeof(char) * cont_w + 2);
			if (array_str[i] == NULL)
				return (NULL);
			for (k = 0; k <= cont_w; k++, j++)
				array_str[i][k] = str[j];
			i++;
			if (i == cont)
				break;
		}
	}
	return (array_str);
}
