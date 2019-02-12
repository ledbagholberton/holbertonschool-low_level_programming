#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print from n to 98
 *
 * @n : From this number to 98
 * Return: No return
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		printf("%d, ", a);
	}
	else
	{
		for (a = n; a > 98; a--)
		printf("%d, ", a);
	}
	printf("98 \n");
}
