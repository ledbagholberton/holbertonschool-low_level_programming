#include "holberton.h"
/**
 * is_prime_number - Define if n is prime or not
 *
 * @n: Number to evaluate
 * Return: 1 if the number is prime / 0 else
 */

int se_divide(int n, int x)
{
	if (x < n)
	{
		if (n%x == 0)
			return (0);
		else
			return (se_divide(n, x+1));
	}
	else
		return (1);
}

int is_prime_number(int n)
{
	int a, x;

	x = 2;
	if (n <= 1)
		a = 0;
	else
	{
		a = se_divide(n,x);
		if (a > 0)
			a = 1;
	}
	return (a);
} 
