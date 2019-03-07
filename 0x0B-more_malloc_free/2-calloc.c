#include "holberton.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return(NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	return(memory);
}
