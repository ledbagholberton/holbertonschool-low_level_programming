#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - Algorithm quick_sort
 *@array: array to order
 *@size: size of array
 * Return: Non return
 */
void quick_sort(int *array, size_t size)
{
	int low_pos, high_pos, size_low, size_high, pivot;

	if (size > 0)
	{
		high_pos = (int)size - 1;
		low_pos = size - high_pos - 1;
		pivot = lomuto(array, low_pos, high_pos, size);
		size_low = (pivot) - low_pos;
		if (size_low > 0)
			quick_sort(array, size_low);
		size_high = (high_pos) - (pivot);
		if (size_high > 0)
			quick_sort(&(array[pivot + 1]), size_high);
	}
}
/**
 * lomuto - partition algorithm
 *@array: array
 *@low_pos: low position
 *@high_pos: high pos
 *@size: size
 * Return: Pivot
 */
int lomuto(int *array, int low_pos, int high_pos, size_t size)
	{
		int i, j, pivot;

		size = size * 1;
		i = low_pos - 1;
		for (j = low_pos; j < high_pos; j++)
		{
			if (array[j] < array[high_pos])
			{
				i++;
				swap_list(array, i, j);
				if (i + 1 != j)
					print_array(array, size);
			}
		}
		pivot = i + 1;
		swap_list(array, pivot, high_pos);
		if (i - 1 != pivot)
			print_array(array, size);
		return (pivot);
	}
/**
 * swap_list - Swap
 *@array: array
 *@pos1: pos1
 *@pos2: pos2
 * Return: Non return
 */
void swap_list(int *array, int pos1, int pos2)
{
	int tmp = array[pos1];

	array[pos1] = array[pos2];
	array[pos2] = tmp;
}
