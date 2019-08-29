#include "search_algos.h"
#include <stdlib.h>

/**
 *interpolation_search - search with interpolation
 *
 *@array: numbers array where is located
 *@size: size of array
 *@value: value to search
 *
 *Return: location of value in the array
 */

int exponential_search(int *array, size_t size, int value)
{
	int b, prev = 1, next;

	if (array  == NULL)
		return (-1);
	while ((array[prev] < value) && (prev < (int)size))
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev *= 2;
	}
	next = prev;
	prev = prev / 2;
	if (next > (int)size)
		size = size - prev - 1;
	else
		size = (prev * 2);
	printf("Value found between indexes [%d] and [%d]\n", prev, (int)size);
	for (b = 0;  (int)b < prev; b++)
		array++;
	if (prev > (int)size)
		size = size - prev - 1;
	else
		size = prev - prev/2 - 1;
	return (binary_search(array, size, value));
}
