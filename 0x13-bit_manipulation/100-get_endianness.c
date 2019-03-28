#include "holberton.h"
/**
 * get_endianness - verify the endianness.
 *
 * Return: 1 if little
 */
int get_endianness(void)
{
	unsigned int aux = 1;
	char *c;

	c = (char *)&aux;
	if (*c)
		return (1);
	return  (0);
}
