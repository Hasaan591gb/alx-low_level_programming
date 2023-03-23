#include "variadic_functions.h"

/**
 * print_numbers - prints numbers supplied as parameters
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
