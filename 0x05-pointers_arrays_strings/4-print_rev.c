#include "main.h"

/**
 * print_rev - print string parameter in reverse
 * @s: parameter string
 */
void print_rev(char *s)
{
	int n;

	for (n = -1; s[n] != '\0'; n--)
		_putchar(s[n]);
	_putchar('\n');
}
