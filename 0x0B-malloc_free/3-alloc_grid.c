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
	int **grid, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		/* Allocate memory for each row (array of int) */
		grid[h] = (int *)malloc(sizeof(int) * width);

		/**
		 * If allocation fails,
		 * free previously allocated memory and return NULL
		 */
		if (grid[h] == NULL)
		{
			for (w = 0; w < width; w++)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
