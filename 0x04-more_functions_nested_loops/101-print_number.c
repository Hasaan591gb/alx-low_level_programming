#include "main.h"

/**
 * print_number - prints input integer to console
 * @n: parameter
 */
void print_number(int n)
{
	int divisor = 1;
	long abs_n = n;

	if (abs_n < 0)
	{
		_putchar('-');
		abs_n = -abs_n;
	}
	while (abs_n / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		int digit = abs_n / divisor;

		_putchar(digit + '0');
		abs_n %= divisor;
		divisor /= 10;
	}
}
