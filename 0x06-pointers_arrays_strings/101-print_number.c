#include "main.h"

/**
 * print_number - prints integer parameter to console
 * @n: integer parameter
 */
void print_number(int n)
{
	int length, sign, divisor, quotient;
	int i, m;

	m = n;
	sign = 1;
	divisor = 1;
	length = 0;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	for (i = 0; m != 0 && m != 1; i++)
	{
		m /= 10;
		length++;
	}
	for (i = 0; i < length; i++)
		divisor *= 10;
	for (i = 0; divisor != 1; i++)
	{
		quotient = n / divisor;
		n -= (quotient * divisor);
		divisor /= 10;
		if (sign < 0)
		{
			_putchar('-');
			sign *= -1;
		}
		_putchar(quotient + '0');
		if (divisor == 1)
			_putchar(n + '0');
	}
	if (n == 0)
		_putchar('0');
}
