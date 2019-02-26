#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the summatory of both diags in a matrix nxn
 *
 * @a: Pointer to bidimensional array 
 * @size: Size of square matrix
 * Return: No return
 */

void print_diagsums(int *a, int size)
{
	int aux, rows, suma1;
/*	int **p = &a; */

	suma1 = 0;
	for (rows = 0; rows <= ((size * size) + 1); rows = rows + size + 1)
	{
		aux = *(a + rows);
		suma1 = suma1 + aux;
	}
	printf("%d, ",suma1);
	suma1 = 0;
	for (rows = size - 1; rows <= ((size * size) - size + 1); rows = rows + size - 1)
	{
		aux = *(a + rows);
		suma1 = suma1 + aux;
	}
	printf("%d\n",suma1);
}
