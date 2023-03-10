#include "main.h"

/**
 * _puts - print string to stdout
 * @str: parameter string
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
