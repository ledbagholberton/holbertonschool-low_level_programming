#include "sort.h"
#include <stdlib.h>
/**
 * merge_sort - Sort merge method
 *@array: array unsorted
 *@size: size
 * Return: Non return
 */
void merge_sort(int *array, size_t size)
{
	if (size > 2)
		merge_sort2(array, size);
}

/**
 * merge_sort2 - Sort merge method
 *@array: array unsorted
 *@size: size
 * Return: Non return
 */
int *merge_sort2(int *array, size_t size)
{
	int half, *new_arr1, *new_arr2, *new_arr3;

	half = (int)size / 2;
	new_arr1 = malloc(half);
	new_arr2 = malloc(size - half);
	new_arr1 = merge_sort2(array, half);
	new_arr2 = merge_sort2(&(array[half]), size - half);
	new_arr3 = malloc(size);
	return(merge(new_arr1, new_arr2, new_arr3));
}

/**
 * merge - merge method
 *@array: array unsorted
 *@size: size
 * Return: Non return
 */
int *merge(int *new_arr1, int *new_arr2, int *new_arr3)
{
	if (new_arr1[0] > new_arr2[0])
	{
		new_arr3[0] = new_arr2[0];
		new_arr3[1] = new_arr1[0];
	}
	else
	{
		new_arr3[0] = new_arr1[0];
		new_arr3[1] = new_arr2[0];
	}
	return(new_arr3);
}
