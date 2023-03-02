#include "main.h"

/**
 * leet - use 1337 to change string
 * @str: parameter string
 * Return: modifies string
 */
char *leet(char *str)
{
	char characters[20] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0'};
	int i, j;

	characters[10] = 'O';
	characters[11] = '0';
	characters[12] = 't';
	characters[13] = '7';
	characters[14] = 'T';
	characters[15] = '7';
	characters[16] = 'l';
	characters[17] = '1';
	characters[18] = 'L';
	characters[19] = '1';
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; characters[j] != '\0'; i += 2)
		{
			if (str[i] == characters[j])
				str[i] = characters[j + 1];
		}
	}
	return (str);
}
