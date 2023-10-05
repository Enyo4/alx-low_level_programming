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
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for each row (array of int) */
		grid[i] = (int *)malloc(sizeof(int) * width);

		/**
		 * If allocation fails,
		 * free previously allocated memory and return NULL
		 */
		if (grid[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
