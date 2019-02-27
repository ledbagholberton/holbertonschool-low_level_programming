#include "holberton.h"
/**
 * doble - x tiemes x
 *
 * @x: Number to analize
 * @n: Number to compare with doble
 * Return: x if equal to n / -1 if not SQR / recursive to explore x+1
 */

int doble(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (doble(x + 1, n));
}
/**
 * _sqrt_recursion - Square root
 *
 * @n: Number to take the square root
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	int x;

	if (n != 0)
	{
	x = 1;
	return (doble(x, n));
	}
	else
		return (0);
}
