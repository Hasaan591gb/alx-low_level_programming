#include <stdio.h>
#include "main.h"

/**
 * print_array - print parameter number of array elements
 * @a: array parameter
 * @n: integer parameter
 */
void print_array(int *a, int n)
{
	int i, m;

	m = n - 1;
	for (i = 0; i < n; i++)
	{
		if (i != m)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
