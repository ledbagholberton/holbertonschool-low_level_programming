#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - double pointer to roprints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */


int **alloc_grid(int width, int height)
{
	int size;
	int *buffer
	size = width * height;
	
	if (size <= 0) 
		return (NULL);
	buffer = malloc(sizeof(int) * size);
	for (cont = 0; cont < size; cont++)
	{
		buffer[cont] = 0;
	}

 	return (buffer);
}
