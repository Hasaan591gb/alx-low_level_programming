#include "main.h"

/**
 * _strchr - return pointer to first occurance of char parameter
 * @s: parameter string
 * @c: parameter char
 * Return: pointer if char present, NULL otherwise
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
