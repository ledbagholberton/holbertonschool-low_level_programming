#include "function_pointers.h"

/**
 * int_index - search for an integer based on cmp pointer
 *
 * @array: where to search the integer
 * @size:  size of array
 * @cmp: pointer to function to be executed
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			a = (*cmp)(array[i]);
			if (a == 1)
				return (i);
			i++;
		}
	}
		return (-1);
}
