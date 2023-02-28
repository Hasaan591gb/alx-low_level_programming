#include "main.h"

/**
 * _strlen - return length of string parameter
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * puts2 - prints every second char of str
 * @str: parameter string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i !> _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
