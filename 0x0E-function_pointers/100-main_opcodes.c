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

return (0);
}
