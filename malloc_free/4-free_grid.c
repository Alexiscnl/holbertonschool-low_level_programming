#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * * free_grid - Frees a dynamically allocated 2D grid.
 * @grid: Pointer to the array of pointers to free.
 * @height: Number of rows in the grid.
 *
 * Return void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
