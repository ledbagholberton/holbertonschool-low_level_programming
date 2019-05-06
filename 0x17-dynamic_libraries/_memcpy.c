#include "holberton.h"
/**
 * _memcpy - Copy n memmory spaces
 *
 * @dest: Address of destiny
 * @src: Address of source to be copied
 * @n: Number until copy the string
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aux1, *aux2;
	unsigned int cont;

	aux1 = src;
	aux2 = dest;

	for (cont = n - 1; cont <= n; cont--)
	{
		aux2[cont] = aux1[cont];
	}
	return (dest);
}
