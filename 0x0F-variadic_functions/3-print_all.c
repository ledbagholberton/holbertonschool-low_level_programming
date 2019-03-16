#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_integer(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void print_chars(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_cadena(va_list arg)
{
/*	if(va_arg(arg, char*) == '\0')
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", va_arg(arg, char*));
	}
*/
	printf("%s", va_arg(arg, char*));
}

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

void nada(va_list arg)
{
	va_arg(arg, int);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list arg;
	mia_t mia[] = {
		{"c", print_chars},
		{"i", print_integer},
		{"s", print_cadena},
		{"f", print_float},
		{"\0", nada},
	};

	va_start(arg, format);
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
	switch(wDay)
		{
		case 0: 
			printf("Sunday");
			break;
		case 1: 
			printf("Monday");
			break;
		case 2: 
			printf("Tuesday");
			break;
		case 3: 
			printf("Wednesday");
			break;
		case 4: 
			printf("Thursday");
			break;
		case 5: 
			printf("Friday");
			break;
		case 6: 
			printf("Saturday");
			break;
		default:
			printf("Invalid weekday number.");
		}


		j = 0;
		while ((format[i] != *(mia[j].op)) && (*(mia[j].op) != '\0'))
		{
			j++;
		}
		mia[j].f(arg);
		i++;
	}
	printf("\n");
	va_end(arg);
}
