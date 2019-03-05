#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - double pointer to grid
 * @width: Widht of grid
 * @height: Height of grid
 *
 * Return: Pointer double to grid.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **buffer;

	if (width <= 0 || height <= 0)
		return (NULL);

	buffer = malloc(sizeof(int*) * height);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
			return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			buffer[j][i] = 0;
		}
	}
	return (buffer);
}
