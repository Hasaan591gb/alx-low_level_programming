#include "main.h"

/**
 * _sqrt_helper - helper function
 * @n: same as _sqrt_recursion()
 * @i: natural square root of n
 * Return: i or -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - finds natural square root of parameter
 * @n: integer parameter
 * Return: natural sqare root of parameter if exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 2));
}
