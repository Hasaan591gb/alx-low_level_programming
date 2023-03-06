#include "main.h"

/**
 * _strchr - return pointer to first occurance of char parameter
 * @s: parameter string
 * @c: parameter char
 * Return: pointer if char present, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
