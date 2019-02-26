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
	int aux, rows, columns, suma2;
/*	int **p = &a; */

	suma2 = 0;

	for (rows = 0; rows <= size; rows++)
	{
		aux = *(a + rows));
		suma2 = suma2 + aux; 
		printf("aux es %d, la suma2 es %d \n",aux ,suma2);
	}
	for (rows = 0, columns = size; rows <= size; rows++, columns--)
	{
		aux = *(a + rows*(columns));
		suma2 = suma2 + aux;
		printf("aux es %d, la suma2 es %d \n",aux ,suma2);
	}
}
