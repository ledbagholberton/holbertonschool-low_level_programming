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
	int n, i;
	char *src1;

	src1 = src;
	n = 0;
	while (*src1 != '\0')
	{
		src1++;
		n++;
	}
	i = -1;
	while (i < n)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
