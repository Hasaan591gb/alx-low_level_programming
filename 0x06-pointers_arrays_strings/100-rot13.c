#include "main.h"

/**
 * rot13 - uses rot13 to encrypt string parameter
 * @str: string parameter parameter
 * Return: modified string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (((str[i] < 123) && (str[i] > 96)) || ((str[i] < 91) && (str[i] > 64)))
		{
			if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
				str[i] -= 13;
			else
				str[i] += 13;
			break;
		}
	}
	return (str);
}
