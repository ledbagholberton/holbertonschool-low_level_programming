#include "holberton.h"
/**
 * _strcpy - copy one string to another
 *
 * @dest: Pointer of Arrays destiny
 * @src: Pointer of Arrays source
 * Return: n value changed to 98
 */

char *_strcpy(char *dest, char *src)
{
	char *fin;
	int n, i;


	fin = src;
	while (*fin != '\0')
	{
		n++;
		fin++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
