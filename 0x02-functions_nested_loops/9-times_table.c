#include "main.h"

/**
 * times_table - prints table to console
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int multiple, last_digit, first_digit;

			multiple = i * j;
			last_digit = multiple % 10;
			first_digit = multiple / 10;
			if (first_digit > 0)
				_putchar(first_digit + '0');
			else 
				_putchar(' ');
			_putchar(last_digit + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
