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
	int b, prev = 1;

	if (array  == NULL)
		return (-1);
	while ((array[prev] < value) && (prev < (int)size))
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev *= 2;
	}
	prev = prev / 2;
	for (b = 0;  (int)b < prev; b++)
		array++;
	if (prev * 2 < (int)size)
		size = prev * 2;
	else
		size = size - prev;
	return (binary_search(array, size, value) + prev);
}
