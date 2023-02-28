#include <stdio.h>
#include "main.h"

/**
 * print_array - print parameter number of array elements
 * @a: array parameter
 * @n: integer parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
