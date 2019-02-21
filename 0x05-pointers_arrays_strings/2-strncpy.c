B#include "holberton.h"
/**
 * _strncpy - Copy two strings
 *
 * @dest: Address of destiny
 * @src: Address of source to be copied
 * @n: Number until copy the string
 * Return: Pointer n value changed to 98
 */


char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; cont < n && src[cont] != '\0'; cont++)
		dest[cont] = src[cont];
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
