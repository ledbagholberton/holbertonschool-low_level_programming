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
	int size, i, j;
	int **buffer;

	size = width * height;
	if (size <= 0)
		return (NULL);
	buffer = malloc(sizeof(int) * height);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
