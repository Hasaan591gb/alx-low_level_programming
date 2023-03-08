#include "main.h"

/**
 * _puts_recursion - print string to console
 * @s: parameter string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
