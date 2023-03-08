#include "main.h"

/**
 * _prime_number_helper - helper function
 * @n: same as is_prime_number
 * @i: counter parameter
 * Return: 1 if yes 0 otherwise
 */
int _prime_number_helper(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - checks if parameter is prime number
 * @n: integer parameter
 * Return: 1 if yes 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number_helper(n, 2));
}
