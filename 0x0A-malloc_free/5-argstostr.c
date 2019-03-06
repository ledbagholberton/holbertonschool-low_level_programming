#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - check the code for Holberton School students.
 *
 *@ac: count of arguments
 *@av: pointer to arguments
 * Return: Always 0.
 */


char *argstostr(int ac, char **av)
{
	int i, j, cont, size;
	char *buffer;

	size = 0;
	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	buffer = malloc(size + ac + 1);
	if (buffer == NULL)
		return (NULL);
	j = 0;
	cont = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[cont] = av[i][j];
			cont++;
		}
		buffer[cont] = '\n';
		cont++;
	}
	return (buffer);
}
