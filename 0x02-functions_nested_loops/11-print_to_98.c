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
			printf(num);
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf(num);
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
		printf(n);
}
