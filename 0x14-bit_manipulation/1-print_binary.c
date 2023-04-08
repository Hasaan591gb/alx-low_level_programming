#include "main.h"

/**
 * exponent - calculates 2 raised to the power of power
 * @power: the power to raise 2 to
 *
 * Return: the value of 2 raised to the power of power
 */
unsigned int exponent(unsigned int power)
{
	if (power == 0)
		return (1);
	return (exponent(power - 1) * 2);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int bits, flag = 0;
	unsigned long int num;

	bits = sizeof(num) * 8;
	num = exponent(bits - 1);
	for (; num; num >>= 1)
	{
		if ((n & num) == num)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
