#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: string parameter
 * Return: length of parameter
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
