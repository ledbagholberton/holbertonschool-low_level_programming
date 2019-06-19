#include "sort.h"
#include <stdlib.h>
/**
 * merge_sort - Sorting algo merge
 *@array: array to order
 *@size: size of array
 * Return: no return
 */
void merge_sort(int *array, size_t size)
{
	int half;
	int new_arr1, new_arr2;

	half = (int)size / 2;
	new_arr1 = malloc(half);
	new_arr1 = merge_sort(array, half);
	new_arr2 = malloc(size - half);
	new_arr2 = merge_sort(&(array[half], size - half));
	merge(new_arr1, new_arr2);
}

/**
 * merge - Algo merge
 *@new_arr1: array 1
 *@new_arr2: array 2
 * Return: no return
 */
void merge(int *new_arr1, int *new_arr2)
{
	int tmp;

	if (new_arr1[0] > new_arr2[0])
		{
			tmp = new_arr1[0];
			new_arr1[0] = new_arr2[0];
			new_arr1[1] = tmp;
		}
	else
		new_arr1[1] = new_arr2[0];
}
