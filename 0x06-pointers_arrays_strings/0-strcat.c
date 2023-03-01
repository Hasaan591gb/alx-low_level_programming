#include "main.h"

/**
 * _strlen - return length of string parameter
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * _strcat - concatenate two strings
 * @dest: parameter to concatenate in
 * @src: parameter to concatenate
 * Return: Concatenated dest
 */
char *_strcat(char *dest, char *src)
{
	int i, length_dest;

	length_dest = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[length_dest + i] = src[i];
	dest[length_dest + i] = '\0';
	return (dest);
}
