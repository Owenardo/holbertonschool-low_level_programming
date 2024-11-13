#include "main.h"
#include <stdio.h>
/**
 * free_grid - free a 2-dimensional array
 * @grid: pointer
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
