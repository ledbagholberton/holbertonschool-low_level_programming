#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * counting_sort - Algorithm counting sort
 *@array: array to order
 *@size: size of array
 * Return: Always 0
 */

void counting_sort(int *array, size_t size)
{
	int *new_array, *array_sorted;
	int i, range, j, a, pos;

	range = 0;
	if (size > 2)
	{
		for (i = 0; i < (int)size; i++)
			if (array[i] > range)
				range = array[i];
		new_array = malloc((range + 1)*sizeof(int));
		for (i = 0; i <= range + 1; i++)
			new_array[i] = 0;
		for (i = 0; i < (int)size; i++)
			new_array[array[i]]++;
		for (i = 1; i <= range + 1; i++)
			new_array[i] = new_array[i] + new_array[i - 1];
		print_array(new_array, range + 1);
		array_sorted =  malloc(size * sizeof(int));
		for (j = size - 1; j >= 0; j--)
		{
			a = array[j];
			pos = new_array[a];
			new_array[a]--;
			array_sorted[pos - 1] = a;
		}
		for (i = 0; i < (int)size; i++)
			array[i] = array_sorted[i];
		free(new_array);
		free(array_sorted);
	}
}
