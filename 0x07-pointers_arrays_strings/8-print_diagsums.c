#include <stdio.h>

/**
 * print_diagsums - sum of diagonals of square matrix
 * @a: square matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				primary_sum += *(a + i * size + j);
			if (i == size - j - 1)
				secondary_sum += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
