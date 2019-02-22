#include "holberton.h"
/**
 * leet - encodes in 1337
 *
 * @str: Address of string
 * Return: Return pointer to string
 */
char *leet(char *str)
{
	char *aux;
	char src[] = "aeotlAEOTL";
	char dest[] = "4307143071";
	int cont, cont2;

	cont = 0;
	aux = str;
	while (aux[cont] != '\0')
	{
		for (cont2 = 0; src[cont2] != '\0'; cont2++)
		{
			if (aux[cont] == src[cont2])
				aux[cont] = dest[cont2];
		}
		cont++;
	}
	return (str);
}
