#include "main.h"

/**
 * _strchr - return pointer to first occurance of char parameter
 * @s: parameter string
 * @c: parameter char
 * Return: pointer if char present, NULL otherwise
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
