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

void rev_string(char *s)
{
	int length = _strlen(s);

	int n, m;
	char temp_str[length];

	m = 0;
	for (n = length; s[n - 1] != s[0]; n--)
	{
		temp_str[m] = s[n - 1];
		m++;
	}
	temp_str[m] = s[0];
	for (n = 0; temp_str != '\0'; n++)
		s[n] = temp_str[n];
}
