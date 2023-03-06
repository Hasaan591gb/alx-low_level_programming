#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination buffer
 * @src: memory area to copy
 * @n: bytes to copy
 * Return: modified buffer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
