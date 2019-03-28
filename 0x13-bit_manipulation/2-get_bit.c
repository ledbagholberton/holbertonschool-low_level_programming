#include "holberton.h"
/**
 * get_bit - return bit in inddex.
 *@n: integer
 *@index: index
 * Return: bit in inddexx
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n))
		return (-1);
	n = n >> index;
	n = n & 1;
	return (n);
}
