#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 *  height dimension of grid
 *  nothing is returned
 *
 */
void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
