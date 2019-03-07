#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocate an array
 * @nmemb: #s de members
 * @size: the size of the memory to print
 *
 * Return: Pointer to array of integers.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		memory[i] = '\0';
	return (memory);
}
