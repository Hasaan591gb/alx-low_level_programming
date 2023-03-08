#include "main.h"

/**
 * go - helper function
 * @number: same as parameter for factorial()
 * @accumulator: return value
 * Return: accumulator parameter
 */
int go(int number, int accumulator)
{
	if (number != 1)
		return (go((number - 1), (accumulator * number)));
	else
		return (accumulator);
}

/**
 * factorial - finds factorial of parameter
 * @n: integer parameter
 * Return: factorial of parameter
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (go(n, 1));
}
