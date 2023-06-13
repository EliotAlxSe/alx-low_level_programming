#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2D Array
 * @grid: 2D Array
 * @height: The Height of the grid (ROW)
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count; count < height; count++)
		free(grid[count]);
	free(grid);
}
