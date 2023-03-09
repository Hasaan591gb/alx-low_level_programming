#include "main.h"

/**
 * wildcmp - compares two string parameters
 * @s1: string to compare
 * @s2: reference string (can have *)
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*s2 == '\0')
			return (1);
		else
			return (0);
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
