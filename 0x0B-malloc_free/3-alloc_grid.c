#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D array of integers and
 * initiate it to 0.
 *
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 * Return: On success, return a pointer to the 2D array of integers.
 * On failure, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
		for (j = 0; j < 1; j++)
			free(grid[j]);
		free(grid);
		return (NULL);
		}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
