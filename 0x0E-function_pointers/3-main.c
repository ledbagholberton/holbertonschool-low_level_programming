#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calc the operation in args
 *
 * @argc: Number of arguments
 * @argv: Inputs Num1, op & Num2
 */

int main(int argc, char *argv[])
{
	char *s;
	int num1, num2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if  ((argv[2][1] != '\0') || (!(*argv[2] == '+' || *argv[2] == '-' ||
		*argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
        {
                printf("Error\n");
                exit(100);
        }
	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = (*get_op_func(s))(num1, num2);
	printf("%d\n", res);
}
