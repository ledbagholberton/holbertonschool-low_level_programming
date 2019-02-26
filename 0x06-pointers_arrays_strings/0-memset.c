#include "holberton.h"

/**
 * _memset - fills memory with the char b
 *
 * @s: Pointer to memmory to be fullfilled
 * @b: Char to use in memory fullfillment
 * @n: Size of memory to be fullfilled
 * Return: Pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *aux;
	unsigned int cont;

	aux = s;
	for (cont = 0; cont < n; cont++)
	{
		aux[cont] = b;
	}
	return (s);
}
