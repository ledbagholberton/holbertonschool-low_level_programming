#include "holberton.h"
/**
 * clear_bit - clear the indexedd bit.
 *@n: integer
 *@index: where is thee  bit
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	b = ~1;
	if (index > (sizeof(n) * 8))
		return (-1);
	while (index != 0)
	{
		index--;
		b = b << 1;
	}
	*n = *n & b;
	return (1);
}
