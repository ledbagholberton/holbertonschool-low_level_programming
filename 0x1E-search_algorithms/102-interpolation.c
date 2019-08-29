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

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low, high;

	high = size - 1;
	low = 0;
	if (array  == NULL)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = (low + (((double)(high - low) /
			       (array[high] - array[low])) *
			      (value - array[low])));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		return (pos);
	}
	if (value == array[low])
		return (low);
	printf("Value checked array[%d] is out of range\n", high);
	return (-1);
}
