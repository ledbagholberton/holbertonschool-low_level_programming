#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all the info .
 *
 *@format : string with info to print
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list arg;
	char *pntr;


	va_start(arg, format);
	i = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		case 's':
			pntr = va_arg(arg, char*);
			if (pntr == NULL)
				printf("%p", pntr);
			else
				printf("%s", pntr);
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		default:
			NULL;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
