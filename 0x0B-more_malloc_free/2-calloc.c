#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocate an array
 * @nmemb: #s de members
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	return (memory);
}
