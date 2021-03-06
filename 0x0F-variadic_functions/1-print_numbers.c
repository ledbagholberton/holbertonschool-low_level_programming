#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the numbers.
 *
 *@separator: string with a separator style
 *@n: number of numbers
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (n != 0)
	{
	for (i = 0; i < n - 1 ; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(arg, int));
	}
	else
		printf("\n");
	va_end(arg);
}
