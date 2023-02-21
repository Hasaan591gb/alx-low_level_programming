#include "main.h"

/**
 * print_last_digit - returns last digit of parameter
 * @num: parameter on which computation is done
 * Return: last digit of parameter
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
	return (0);
}
