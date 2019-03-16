#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the integers.
 *
 *@n: number of integers to sum
 * Return: Sumatory
 */

int sum_them_all(const unsigned int n, ...)
{
	int suma;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	suma = 0;

	if (n == 0)
		return (0);

	for (i = 0; i <= n; i++)
	{
		suma = suma + va_arg(arg, int);
	}
	va_end(arg);
	return (suma);
}
