#include "function_pointers.h"

/**
 * array_iterator -  Print something based on action
 * @array: the integer to print
 * @size: size of array
 * 
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
