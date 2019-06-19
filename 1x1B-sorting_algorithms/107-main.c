#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {4, 8, 1, 6, 3, 7, 2, 5};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	quick_sort_hoare(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
