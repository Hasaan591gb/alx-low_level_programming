#include "main.h"

/**
 * print_sign - checks if parameter is positive, negative or zero
 * @n: parameter for checking the sign
 * Return: + if positive, 0 if zero and - if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
