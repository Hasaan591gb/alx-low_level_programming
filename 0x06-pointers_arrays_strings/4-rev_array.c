#include "main.h"

/**
 * reverse_array - reverse elements of an array
 * @a: array parameter
 * @n: elements in array a
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
