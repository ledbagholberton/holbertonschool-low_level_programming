#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate tw strings.
 *
 *@s1 : String 1 
 *@s2 : String 2
 *@n : n bytes of string 2
 *
 * Return: Pointer to new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned i, a, b, size, pos;
	char *new_str;

	for (a = 0; s1[a] != '\0'; a++);
	for (b = 0; s2[b] != '\0'; b++);

	if (n >= b)
	{
		size = a + b + 1;
		n = b;
	}
	else
		size = a + n + 1;

	new_str = malloc(sizeof(char) * size);

	for (pos = 0, i = 0; i < a; i++, pos++)
		new_str[pos] = s1[i];
	for (i = 0; i < n; i++, pos++)
		new_str[pos] = s2[i];
	new_str[pos] = '\0';
	return (new_str);
}
