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
	int a25, b25, a10, b10, a5, b5, a2, b2, a1, total, suma;

	argc = argc;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0 || *argv[1] == '0')
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[1]) == 0)
	{
		printf("Error\n");
		return (0);
	}
	total = atoi(argv[1]);
	if (total != 0)
	{
		a25 = total / 25;
		b25 = total % 25;
		a10 = b25 / 10;
		b10 = b25 % 10;
		a5 = b10 / 5;
		b5 = b10 % 5;
		a2 = b5 / 2;
		b2 = b5 % 2;
		a1 = b2 / 1;
		suma = a25 + a10 + a5 + a2 + a1;
		printf("%d\n", suma);
		return (0);
	}
}
