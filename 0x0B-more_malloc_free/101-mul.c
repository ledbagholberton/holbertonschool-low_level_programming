#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

int main (int argc ,char *argv[])
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
