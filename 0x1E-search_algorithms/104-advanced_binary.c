#include "search_algos.h"
#include <stdlib.h>

/**
 *advanced_binary - search binary advanced
 *
 *@array: numbers array where is located
 *@size: size of array
 *@value: value to search
 *
 *Return: location of value in the array
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t med_size, a, b;

	if (array == NULL)
		return (-1);
	if (size > 0)
	{
		printf("Searching in array: ");
		for (a = 0; a < size - 1; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);
		med_size = 1 + (size - 1) / 2;
		if (array[med_size] == value)
//			while ((array[med_size] == array[med_size - 1]))
//				med_size = med_size - 1;
			return ((int)med_size);
		if (array[med_size] > value)
		{
			size = med_size;
			return (advanced_binary(array, size, value));
		}
		else
		{
			size = med_size;
			for (b = 0;  b < med_size; b++)
				array++;
			return (advanced_binary(array, size, value) + med_size);
		}
	}
	return (-1);
}
