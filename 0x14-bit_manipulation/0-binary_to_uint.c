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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the string
 * b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] == '1')
			num += exponent(i - j - 1);
	}

	return (num);
}
