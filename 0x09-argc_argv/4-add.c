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
	int cont, suma;

	argc = argc;
	suma = 0;
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
