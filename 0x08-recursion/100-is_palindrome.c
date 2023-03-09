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

/**
 * _palindrome_helper - helper function
 * @s: same as is_palindrome()
 * @i: index parameter
 * Return: 1 if palindrome 0 otherwise
 */
int _palindrome_helper(char *s, int i)
{
	if (_strlen_recursion(s) <= 1)
		return (1);
	else if (*s != *(s + _strlen_recursion(s) - 1 - i))
		return (0);
	else
		return (_palindrome_helper(s + 1, i + 1));
}

/**
 * is_palindrome - checks whether a string is palindrome or not
 * @s: string parameter to check
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_palindrome_helper(s, 0));
}
