#include "main.h"

/**
 * _strncat - concatenate two strings at most n bytes
 * @dest: parameter to concatenate in
 * @src: parameter to concatenate
 * @n: maximum number of bytes to concatenate
 * Return: Concatenated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length_dest;

	length_dest = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length_dest + i] = src[i];
	dest[length_dest + i] = '\0';
	return (dest);
}
