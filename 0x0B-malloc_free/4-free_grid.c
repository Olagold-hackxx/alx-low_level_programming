#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free alloc space for 2D array
 * @grid: pointer to array
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
}
