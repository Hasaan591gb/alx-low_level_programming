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
 * rev_string - reverse string parameter
 * @s: string parameter
 */
void rev_string(char *s)
{
	int n, m;

	m = 0;
	n = _strlen(s);
	for (; s[n] != s[0]; n--)
	{
		if (s[n] == '\0')
			continue;
		s[n] = s[m];
		m++;
	}
	s[m] = s[0];
	s[m + 1] = '\0';
}
