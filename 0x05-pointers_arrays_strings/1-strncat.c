#include "holberton.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: Address of destiny string
 * @src: Address of source string
 * n: 
 * Return: Pointer to destiny string
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont;
	char *fuente, *destino;

	fuente = src;
	destino = dest;

	for (cont = 0; destino[cont] != '\0'; cont++)
		continue;
	destino = destino + cont;

	while (*fuente != '\0' && n > 0)
	{
		*destino = *fuente;
		destino++;
		fuente++;
		n--;
	}
	*destino = '\0';
	return (dest);
}
