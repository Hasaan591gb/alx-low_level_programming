#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints table of parameter
 * @n: parameter for calculation
 */
void print_times_table(int n)
{
	int i, j, multiple;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n + 1; j++)
			{
				multiple = i * j;
				if (multiple == 0)
					printf("%d", multiple);
				else if (multiple < 10)
					printf(",   %d", multiple);
				else if (multiple < 100)
					printf(",  %d", multiple);
				else if (multiple < 1000)
					printf(", %d", multiple);
			}
			_putchar('\n');
		}
	}
}
