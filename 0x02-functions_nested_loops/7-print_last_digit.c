#include "main.h"

/**
 * print_last_digit - returns last digit of parameter
 * @digit: parameter on which computation is done
 * Return: last digit of parameter
 */
int print_last_digit(int digit)
{
	int last_digit;

	last_digit = digit % 10;
	return (last_digit);
}
