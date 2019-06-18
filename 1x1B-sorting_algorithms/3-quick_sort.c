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
	if (size > 1)
		quick_sort2(array, 0, size - 1, size);
}

/**
 * quick_sort2 - Algorithm quick_sort
 *@array: array to order
 *@size: size of array
 *@low_pos: low_pos
 *@high_pos: high_pos
 * Return: Non return
 */
void quick_sort2(int *array, int low_pos, int high_pos, size_t size)
{
	int pivot;

	if (high_pos - low_pos > 0)
	{
		pivot = lomuto(array, (int)low_pos, (int)high_pos, size);
		quick_sort2(array, (int)low_pos, pivot - 1, size);
		quick_sort2(array, pivot + 1, (int)high_pos, size);
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

		i = low_pos - 1;
		for (j = low_pos; j < high_pos; j++)
		{
			if (array[j] < array[high_pos])
			{
				i++;
				swap_list(array, i, j);
				if (i != j)
					print_array(array, size);
			}
		}
		pivot = i + 1;
		if (pivot != high_pos && array[pivot] != array[high_pos])
		{
			swap_list(array, pivot, high_pos);
			print_array(array, size);
		}

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
