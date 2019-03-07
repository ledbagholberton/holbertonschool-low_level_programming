#include "holberton.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	int size, i;
 
	if (old_size == new_size)
		return(ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		b = ptr;
		if (old_size > new_size)
			size = new_size;
		else
			size = old_size;
		for (i = 0; i < size; i++)
			a[i] = b[i];
		free(ptr);
	}
	return (a);
}
