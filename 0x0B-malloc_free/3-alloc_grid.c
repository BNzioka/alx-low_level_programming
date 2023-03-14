#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: Pointer to dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

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
		for (j = i -1; j >= 0; j--)
			free(grid[j]);
		free(grid);
		return (NULL);
		}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
