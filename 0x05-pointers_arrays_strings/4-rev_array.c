#include "holberton.h"
/**
 * reverse_array - reverse an integer array
 *
 * @a: Address of array
 * @n: Size of array
 * Return: No return
 */

void reverse_array(int *a, int n)
{
	int cont, tmp, tmp2;

	cont = 0;
	n = n - 1;
	while  (cont < n) 
	{
	tmp = a[cont];
	tmp2 = a[n];
	a[n] = tmp;
	a[cont] = tmp2;
	n--;
	cont++;
	}
}
