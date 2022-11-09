#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: integer
 * @height: integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
