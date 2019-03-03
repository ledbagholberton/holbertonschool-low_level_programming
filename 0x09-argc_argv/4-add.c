#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 *@argc: Counts arguments in argv
 *@argv: Strings after exe
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int cont, cont2, suma;
	char *cadena;

	argc = argc;
	suma = 0;

	for (cont = 1; cont < argc; cont++)
	{
		cadena = argv[cont];
		for (cont2 = 0; cadena[cont2] != '\0'; cont2++)
		{
			if (cadena[cont2] < 48 || cadena[cont2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (cont = 1; cont < argc; cont++)
	{
		if (atoi(argv[cont]) != 0 && *argv[cont] != '0')
		{
			suma = suma + atoi(argv[cont]);
		}
		else
		{
			if (*argv[cont] == '0')
				suma = suma;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", suma);
	return (0);
}
