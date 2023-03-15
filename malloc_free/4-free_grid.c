#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: pointer to the 2d grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
