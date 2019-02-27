#include "holberton.h"

/**
 * factorial - Factorial n
 *
 * @n: n Factorial
 * Return: Integer with factorial of n
 */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}
	return (n * factorial(n - 1));
}
