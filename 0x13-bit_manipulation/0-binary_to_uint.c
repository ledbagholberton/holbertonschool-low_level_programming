#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - convert string with 0 &1 to integer.
 *
 *@b: stringc
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int cont, mask;

	if (b == NULL)
		return (0);
	for (cont = 0; b[cont] != '\0'; cont++)
		;
	cont--;
	mask = 1;
	while (cont >= 0)
	{
		if (b[cont] == '1')
			res = res + mask;
		else if (b[cont] == '0')
			res = res;
		else
			return (0);
		mask = mask << 1;
		cont--;
	}
	return (res);
}
