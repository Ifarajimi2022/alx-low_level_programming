#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a two dimensional grid created
 * @grid: address of the grid
 * @height: breadth of the grid
 * Return: Nothing
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
