#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: buffer to look in
 * @needle: buffer to look
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, reference;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		reference = 0;
		j = 0;
		if (needle[j] == haystack[i])
		{
			for (; needle[j]; j++)
			{
				if (needle[j] == haystack[i + j])
					reference++;
			}
			if (reference >= j)
				return (haystack + i);
		}
	}
	return (NULL);
}
