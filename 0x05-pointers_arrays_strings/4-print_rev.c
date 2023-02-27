#include "main.h"

/**
 * _strlen - return length of string parameter
 * @str: string parameter
 * Return: length of string
 */
int _strlen(char *str)
{
	int length;
	int i;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * print_rev - print string parameter in reverse
 * @s: parameter string
 */
void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	do {
		_putchar(s[n]);
		n--;
	} while (s[n] != s[0]);
	_putchar('\n');
}
