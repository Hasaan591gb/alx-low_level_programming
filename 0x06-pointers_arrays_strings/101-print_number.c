#include "main.h"

/**
 * print_number - prints integer parameter to console
 * @n: integer parameter
 */
void print_number(int n)
{
	int divisor;

	divisor = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %=  divisor;
		divisor /= 10;
	}
}
