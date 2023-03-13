#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - make a 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return:  a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr_grid = (int **) malloc(sizeof(int *) * height);

	if (ptr_grid == NULL)
	{
		for (i = 0; i < height; i++)
			free(*(ptr_grid + i));
		free(ptr_grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		*(ptr_grid + i) = (int *) malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(ptr_grid + i) + j) = 0;
	}

	return (ptr_grid);
}
