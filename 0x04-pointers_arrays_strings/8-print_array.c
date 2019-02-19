#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the n elements from array
 *
 * @n: Numbers of arrays to be printed
 * @a: Pointer of array
 * Return: No return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	printf("%d\n", *a);
}
