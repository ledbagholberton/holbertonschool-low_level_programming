#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - Bubble sort Algorithm
 * @array: Array
 * @size: Size of array
 *
 **/
void bubble_sort(int *array, size_t size)
{
	int flag = 1;
	size_t i = 0;
	while (flag == 1 && size > 1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[(int) i] > array[(int) i + 1])
			{
				swap_list(array, (int) i, (int) i + 1);
				print_array(array, size);
				flag = 1;
			}
		}
	}
}

void swap_list(int *array, int pos1, int pos2)
{
	int tmp = array[pos1];
	array[pos1] = array[pos2];
	array[pos2] = tmp;
}
