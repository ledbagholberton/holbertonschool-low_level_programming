#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 *
 * @s: Initial address of String
 * Return: No return
 */

void rev_string(char *s)
{
	int i, j;
	char *fin, *inicio, aux, aux2;

	i = 0;
	fin = s;
	inicio = s;
	while (*fin != '\0')
	{
		i++;
		fin++;
	}

	fin--;
	for (j = 0; j <= i / 2 - 1; j++)
	{
		aux = *fin;
		aux2 = *inicio;
		*inicio = aux;
		*fin = aux2;
		inicio++;
		fin--;
	}
}
