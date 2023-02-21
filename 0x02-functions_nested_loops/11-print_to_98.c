#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers to 98
 * @n: function parameter
 */
void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
				printf("%d\, ", num)
			else
				printf("%d", num)
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
				printf("%d\, ", num)
			else
				printf("%d", num)
		}
		_putchar('\n');
	}
	else if (n == 98)
		printf("%d\n", n);
}
