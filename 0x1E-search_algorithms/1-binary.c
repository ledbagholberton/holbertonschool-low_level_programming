#include "search_algos.h"
#include <stdlib.h>

/**
 *binary_search - search binary
 *
 *@array: numbers array where is located
 *@size: size of array
 *@value: value to search
 *
 *Return: location of value in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t med_size, a, b;
	int pos;

	a = 0;
	printf("Searching in array: ");
	while (a < size - 1)
	{
		printf("%d, ", array[a]);
		a++;
	}
	printf("%d \n", array[a]);
	if ((size % 2) == 0)
		med_size = (size / 2);
	else
		med_size = (size - 1) / 2;
	if (array[med_size] == value)
		return((int)med_size);
	if (med_size == 1)
		return((int)med_size - 1);
	else if (array[med_size] > value)
	{
		size = med_size;
		pos = binary_search(array, size, value);
	}
	else
	{
		size = med_size;
		for (b = 0;  b < med_size; b++)
			array++;
		pos = binary_search(array, size, value) + med_size;
	}
	return(pos);
}
