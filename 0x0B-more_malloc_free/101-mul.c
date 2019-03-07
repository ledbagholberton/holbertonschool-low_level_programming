#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * main - two string multiplication
 * @argc: counter args
 * @argv: args string pointer
 *
 * Return: 98 in case error.
 */

int main(int argc, char *argv[])
{
	int mulf;

	argc = argc;
	if (argv[1] == NULL || argv[2] == NULL)
		printf("Error\n");
	else
	{
		mulf = atoll(argv[1]) * atoll(argv[2]);
		printf("%d\n", mulf);
	}
	return (0);
}
