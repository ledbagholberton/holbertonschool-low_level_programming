#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - it select the correct function to run.
 *
 *@s: Bring the operator to run.
 * Return: An integer which is the array position (0 +, 1 -, 2 *, 3 /, 4 %)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <= 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
