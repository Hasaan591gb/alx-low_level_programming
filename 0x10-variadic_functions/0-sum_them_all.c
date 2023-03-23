#include "variadic_functions.h"

/**
 * sum_them_all - computes sum of integer parameters
 * @n: number of parameters
 * Return: sum of all parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(op, n);
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	va_end(op);

	return (sum);
}
