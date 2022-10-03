#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocation of a 2D array
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
