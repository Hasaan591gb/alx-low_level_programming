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
			for (j = 0; j <= n; j++)
			{
				multiple = i * j;
				if (j != n)
				{
					if (multiple == 0)
					{
						if (i == 0 && j == 0)
							printf("%d,", multiple);
						printf("%4d,", multiple);
					}
					else
						printf("%4d,", multiple);
				}
				else
					printf("%4d\n", multiple);
			}
		}
	}
}
