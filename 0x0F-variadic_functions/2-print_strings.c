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
	char *pntr;

	va_start(arg, n);
	pntr = va_arg(arg, char*);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (pntr == NULL)
				printf("%p", pntr);
			else
				printf("%s", pntr);
			if (separator != NULL)
				printf("%s", separator);
			pntr = va_arg(arg, char*);
		}
		if (pntr == NULL)
			printf("%p\n", pntr);
		else
			printf("%s\n", pntr);
	}
	else
		printf("\n");
	va_end(arg);
}
