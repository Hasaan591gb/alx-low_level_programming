#include "main.h"

/**
 * print_rev - print string parameter in reverse
 * @s: parameter string
 */
void print_rev(char *s)
{
	int n;

	n = -1;
	do {
		_putchar(s[n]);
		n--;
	} while (s[n] != s[0]);
	_putchar('\n');
}
