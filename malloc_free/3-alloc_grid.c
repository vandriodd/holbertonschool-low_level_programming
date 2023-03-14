#include "main.h"

/**
 * alloc_grid - ccreate a 2d grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid; /* dynamic grid */
	int i, n;

	/* if width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int) * height);

	/* in case of failure return NULL */
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		/* in case of the mem is not enough */
		if (!grid[i])
		{
			/* free it */
			for (n = 0; n < i; n++)
				free(grid[n]);

			free(grid);
		}
	}

	/* each element of the grid should be initialized to 0 */
	for (i = 0; i < height; i++)
		for (n = 0; n < width; n++)
			grid[i][n] = 0;

	return (grid);
}
