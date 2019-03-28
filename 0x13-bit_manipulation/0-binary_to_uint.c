#include "holberton.h"


/**
 * binary_to_uint - convert string with 0 &1 to integer.
 *
 *@b: c
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, mul = 1;
	int cont;

	if (b == NULL)
		return (0);
	for (cont = 1; b[cont] != '\0'; cont++)
	{
	}
	cont--;
	while (cont >= 0)
	{
		mul = mul * 2;
		if (b[cont] == '0' || b[cont] == '1')
		{
			res = (res + (b[cont] - '0') * mul);
			cont--;
		}
		else
			return (0);

	}
	return (res / 2);
}
