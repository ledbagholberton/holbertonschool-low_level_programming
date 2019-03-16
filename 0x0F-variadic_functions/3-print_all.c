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
	unsigned int i, flag;
	va_list arg;
	char *pntr;


	va_start(arg, format);
	i = 0;

	while (format && format[i] != '\0')
	{
		flag = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 's':
			pntr = va_arg(arg, char*);
			if (pntr == NULL)
			{
				printf("%p", pntr);
				break;
			}
			printf("%s", pntr);
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		default:
			flag = 0;
		}
		if (format[i + 1] != '\0' && flag == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
