#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase letters
 * @str: string parameter
 * Return: updated string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ' ';
	}
	return (str);
}
