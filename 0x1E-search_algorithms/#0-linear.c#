#include "search_algos.h"
#include <stdlib.h>

/**
 *linear_search - search linear
 *
 *@array: numbers array where is located
 *@size: size of array
 *@value: value to search
 *
 *Return: location of value in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	a = 0;
	if (size == 0)
		return (-1);
	while (a < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	if (a >= size)
		a = -1;
	return (a);
}
