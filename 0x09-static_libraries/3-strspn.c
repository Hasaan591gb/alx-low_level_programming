#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: buffer to check
 * @accept: buffer to reference
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
		if (length <= i)
			break;
	}
	return (length);
}
