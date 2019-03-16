#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print the strings.
 *
 *@separator: string to separe the other strings
 *@n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 1; i < n; i++)
	{
		printf("%s", va_arg(arg, char*));
		printf("%s", separator);
	}
	printf("%s\n", va_arg(arg, char*));
}
