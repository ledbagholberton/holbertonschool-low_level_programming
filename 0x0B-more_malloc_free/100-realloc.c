#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: the address of memory of old_size
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: Pointer to new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	int size, i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
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
