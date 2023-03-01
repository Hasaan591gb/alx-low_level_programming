#include "main.h"

/**
 * _strncpy - copy one string into another at most n bytes
 * @dest: parameter to concatenate in
 * @src: parameter to concatenate
 * @n: maximum number of bytes to concatenate
 * Return: Copied dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
