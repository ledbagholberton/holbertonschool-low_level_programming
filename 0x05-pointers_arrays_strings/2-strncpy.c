#include "holberton.h"
/**
 * reset_to_98 - change the value of n to 98
 *
 * @n: Address of n
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
