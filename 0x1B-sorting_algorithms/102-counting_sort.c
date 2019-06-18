#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

void counting_sort(int *array, size_t size)
{
	int *new_array, *array_sorted;
	int i, range, j, a, pos;
// found the biggest number in array - range
	range = 0;
	for (i = 0; i < (int)size; i++)
		if (array[i] > range)
			range = array[i];
	new_array = malloc(range + 1);
// new_array size range+1 & initialization in  0
	for (i = 0; i <= range + 1; i++)
		new_array[i] = 0;
// count of quantity of number ocurrences
	for (i = 0; i < (int)size; i++)
		new_array[array[i]]++;
// count of quantity of number ocurrences backward
	for (i = 1; i <= range + 1; i++)
		new_array[i] = new_array[i] + new_array[i - 1];
	print_array(new_array, range + 1);
//  new array with sorted numbers
	array_sorted =  malloc(size);
	for (j = size - 1; j >= 0; j--)
	{
		a = array[j];
		pos = new_array[a];
		new_array[a]--;
		array_sorted[pos - 1] = a;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = array_sorted[i];
}
