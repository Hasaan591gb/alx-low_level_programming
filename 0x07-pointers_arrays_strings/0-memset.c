#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: buffer pointed to
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
