#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: parameter that keeps grid to free
 * @height: parameter that keeps height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
