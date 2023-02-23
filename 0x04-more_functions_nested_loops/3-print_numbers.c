#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: digits 0 to 9
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
