#include "main.h"

/**
 * cap_string - capitalise first letter of each word
 * @str: parameter string
 * Return: modified string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 9 || str[i] == 10 || str[i] == 44 || str[i] == 59)
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
		else if (str[i] == 46 || str[i] == 33 || str[i] == 63 || str[i] == 34)
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
		else if (str[i] == 40 || str[i] == 41 || str[i] == 123 || str[i] == 125)
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
		else if (str[i] == 32)
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
	}
	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	return (str);
}
