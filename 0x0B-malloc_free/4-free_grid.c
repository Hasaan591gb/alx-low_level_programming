#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free supplied 2D array
 * @grid: 2D array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
