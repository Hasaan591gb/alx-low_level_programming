#include "main.h"

/**
 * _strlen - return length of string parameter
 * @s: string parameter
 */
int _strlen(char *s)
{
	int length;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return(length);
}
