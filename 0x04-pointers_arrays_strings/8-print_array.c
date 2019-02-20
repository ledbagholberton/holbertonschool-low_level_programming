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

	if (n != 0)
	{
		for (i = 1; i < n ; i++)
		{
		printf("%d, ", *a);
		a++;
		}
		printf("%d\n", *a);
	}
	else
	printf("\n");
}
