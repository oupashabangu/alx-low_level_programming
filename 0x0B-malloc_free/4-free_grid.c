#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimentional grid
 * @grid: grid
 * @height: height
 *
 * Return: NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
