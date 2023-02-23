#include "main.h"

/**
 * print_triangle - prints triangle on parameter number of lines
 * @size: parameter
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			if (i == size)
			{
				for (j = 0; j < size; j++)
					_putchar('#');
				_putchar('\n');
			}
			else
			{
				for (j = 0; j < (size - i); j++)
					_putchar(' ');
				for (j = 0; j < i; j++)
					_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
