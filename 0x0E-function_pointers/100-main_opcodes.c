#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 *
 * @argc: Number of arguments
 * @argv: Number of bytes to print
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s;
	int num1, num2, res;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	if  (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}


	printf("%d\n", res);
	return (0);
}
