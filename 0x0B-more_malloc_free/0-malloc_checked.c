#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - check the code for Holberton School students.
 *
 *@b: variable with the size of memory required
 * Return: Pointer to allocate memory.
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == (NULL))
		exit(98);
	return (a);
}
