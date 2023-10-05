#include <stdlib.h>

/**
 * free_grid -  free up a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL && height != 0)
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
		}
		free(grid);
	}
}
