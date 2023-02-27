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
	int length, i, j, a, b;
	char x;

	a = 0;
	b = -1;
	length = _strlen(s);
	i = length / 2;
	for (j = 0; j < i; j++)
	{
		x = s[a];
		s[a] = s[b];
		s[b] = x;
		a++;
		b--;
	}
}
