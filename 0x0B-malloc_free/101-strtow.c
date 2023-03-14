#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, k, length, elements = 2;
	char **ptr_strtow;

	if (str == NULL || str == "")
		return (NULL);

	for (j = 0; str[j] == ' '; j++)
		continue;
	for (i = j; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			elements++;
	}

	ptr_strtow = (char **) malloc(sizeof(char *) * elements);

	if (ptr_strtow == NULL)
		return (NULL);

	for (i = 0; i < elements; i++)
	{
		length = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				break;
			length++;
		}
		for (; str[j] == ' '; j++)
			continue;

		ptr_strtow[i] = malloc(sizeof(char) * (length + 1));
		if (*(ptr_strtow + i) == NULL)
		{
			 for (k = 0; k <= i; k++)
				free(*(ptr_strtow + k));
			free(ptr_strtow);
			return (NULL);
		}
	}

	for (j = 0; str[j] == ' '; j++)
		continue;
	for (i = 0; i < (elements - 1); i++)
	{
		for (; str[j] != ' ' && str[j] != '\0'; j++)
			ptr_strtow[i][j] = str[j];
		ptr_strtow[i][j] = '\0';
		for (; str[j] == ' '; j++)
			continue;
	}
	ptr_strtow[i][0] = '\0';

	return (ptr_strtow);
}
