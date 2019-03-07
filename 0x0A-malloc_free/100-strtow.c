#include "holberton.h"
#include <stdlib.h>

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

	if (str == NULL || *str == '\0')
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		if (str[j] == ' ' && str[j - 1] >= 33 && str[j - 1] <= 126)
			cont++;
	cont++;
	array_str = malloc(sizeof(char *) * (cont + 1));
	if (array_str == NULL)
		return (NULL);
	array_str[cont] = NULL;
	for (j = 0; str[j] != '\0'; j++)
	{
		flag = 0;
		cont_w = 0;
		while (str[j + cont_w] != ' ')
		{
			cont_w++;
			flag = 1;
		}
		if (flag == 1)
		{
			array_str[i] = malloc(sizeof(char) * (cont_w + 1));
			if (array_str[i] == NULL)
				return (NULL);
			for (k = 0; k < cont_w; k++, j++)
				array_str[i][k] = str[j];
			array_str[i][k] = '\0';
			i++;
			if (i == cont)
				break;
		}
	}
	return (array_str);
}
