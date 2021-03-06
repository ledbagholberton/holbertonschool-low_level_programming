#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int i, size, *array_int;

	size = max - min + 1;
	if (size < 0)
		return (NULL);
	array_int = malloc(sizeof(int) * size);
	if (array_int == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array_int[i] = min;
		min++;
	}
	return (array_int);
}
