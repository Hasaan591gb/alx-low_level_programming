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
 * swap_char - swaps parameters
 * @a: parameter1
 * @b: parameter2
 */
void swap_char(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = *a;
}

/**
 * rev_string - reverse string parameter
 * @s: string parameter
 */
void rev_string(char *s)
{
	int length, i;

	length = _strlen(s);
	for (i = 0, length > i; i++)
	{
		swap_char(s + length, s + i);
		length--;
	}
}
