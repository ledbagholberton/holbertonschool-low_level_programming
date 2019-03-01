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
	int mulf;

	argc = argc;
	if (argv[1] == NULL || argv[2] == NULL)
		printf("Error\n");
	else
	{
		mulf = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mulf);
	}
	return (0);
}
