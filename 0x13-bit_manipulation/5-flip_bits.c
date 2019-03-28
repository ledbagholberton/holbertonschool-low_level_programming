#include "holberton.h"
/**
 * flip_bits - search how  many bitts are different.
 *@n: integer n
 *@m: integer m
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;

	while (!(n == 0 && m == 0))
	{
		if ((n & 1) != (m & 1))
			cont++;
		n = n >> 1;
		m = m >> 1;
	}
	return (cont);
}
