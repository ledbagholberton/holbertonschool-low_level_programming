#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22
	};
	size_t size = sizeof(array) / sizeof(array[0]);

/*	printf("Found %d at index: %d\n\n", 0, binary_search(array, size, 0));*/
	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 4, binary_search(array, size, 4));
	printf("Found %d at index: %d\n\n", 6, binary_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));
	printf("Found %d at index: %d\n\n", 18, binary_search(array, size, 18));
	printf("Found %d at index: %d\n\n", 22, binary_search(array, size, 22));
/*	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));*/
	return (EXIT_SUCCESS);
}
