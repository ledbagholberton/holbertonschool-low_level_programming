#include "search_algos.h"
#include <stdlib.h>

/**
 *jump_search - search with jump
 *
 *@array: numbers array where is located
 *@size: size of array
 *@value: value to search
 *
 *Return: location of value in the array
 */

int jump_search(int *array, size_t size, int value)
{
	int step, prev, a;

	prev = 0;
	step = sqrt(size);
	while ((array[prev] < value) && (prev < (int)size))
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = prev + step;
	}
	a = prev - step;
	printf("Value found between indexes [%d] and [%d]\n", a, a + step);
	while ((a <= prev) && (a < (int)size))
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	if ((a >= prev) || (a >= (int)size))
		a = -1;
	return (a);
}
