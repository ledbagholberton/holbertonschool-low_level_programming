#include "holberton.h"
/**
 * infinite_add - add two strings
 *
 * @n1: First char number
 * @n2: Second char number
 * @r: Pointer to buffer
 * @size_r: Buffer size
 * Return: Pointer to char result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, u, d, cont, cont2;
	char *aux1, *aux2;

	for (cont = 0; aux1[cont] != '\0' ; cont++);
	for (cont2 = 0; aux2[cont2] != '\0' ; cont2++);
	d = 0;
	while ( cont == 0 && cont2 == 0)
	{
		a = (aux[cont] - 48) + (aux2[cont2] - 48) + d;
		u = a % 10;
		d = a/10;
		r[cont] = u + 48;
		cont--;
		cont2--;
	}
}
