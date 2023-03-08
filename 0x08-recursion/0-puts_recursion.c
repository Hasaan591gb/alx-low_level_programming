#include "main.h"

/**
 * _puts_recursion - print string to console
 * @s: parameter string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
