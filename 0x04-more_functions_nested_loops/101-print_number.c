#include "main.h"

/**
 * print_number - prints input integer to console
 * @n: parameter
 */
void print_number(int n)
{
	int r;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}
	while (r > 0)
	{
		_putchar((r % 10) + '0');
		r /= 10;
	}
	if (n == 0)
		_putchar('0');
}
