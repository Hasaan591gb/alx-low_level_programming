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
	char temp_str[10000];

	m = 0;
	for (n = _strlen(s); s[n] != s[0]; n--)
	{
		if (s[n] == '\0')
			continue;
		temp_str[m] = s[n];
		m++;
	}
	temp_str[m] = s[0];
	for (n = 0; temp_str != '\0'; n++)
		s[n] = temp_str[n];
}
