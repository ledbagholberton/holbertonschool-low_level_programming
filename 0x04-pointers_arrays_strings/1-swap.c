#include "holberton.h"

/**
 * swap_int - changes two numbers from them pointers
 *
 * @a: pointer to variable a
 * @b: pointer to variable b
 * Return: No return
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
