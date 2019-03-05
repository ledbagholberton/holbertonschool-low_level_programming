#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free memory space of a grid
 * @buffer: Space to free
 * @height: Height of grid
 *
 * Return: Pointer double to grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!(grid == NULL || height == 0))
	{
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	}
}
