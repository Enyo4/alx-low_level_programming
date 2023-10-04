#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
