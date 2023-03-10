#include <stdio.h>
#include <stdlib.h>

/**
 * check_NULL - checks if parameter is empty
 * @str: parameter string
 * Return: 1 if yes 0 otherwise
 */
int check_NULL(char *str)
{
	int i;

	if (str == NULL)
		return (1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ')
			break;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

/**
 * alloc_mem - allocates memory
 * @j: value of j
 * @elements: number of words
 * @str: parent string
 * Return: pointer to an array of strings
 */
char **alloc_mem(int j, int elements, char *str)
{
	int i, k, length;
	char **ptr_strtow;

	ptr_strtow = (char **) malloc(sizeof(char *) * elements);

	if (ptr_strtow == NULL)
		return (NULL);

	for (i = 0; i < (elements - 1); i++)
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
		for (k = 0; k < length; k++)
			ptr_strtow[i][k] = str[j - length + k];
		ptr_strtow[i][length] = '\0';
	}

	return (ptr_strtow);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, elements = 2;
	char **ptr_strtow;

	i = check_NULL(str);
	if (i == 1)
		return (NULL);

	for (j = 0; str[j] == ' '; j++)
		continue;
	for (i = j; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			elements++;
	}

	ptr_strtow = alloc_mem(j, elements, str);

	for (j = 0; str[j] == ' '; j++)
		continue;
	for (i = 0; i < elements; i++)
	{
		for (; str[j] != ' ' && str[j] != '\0'; j++)
			ptr_strtow[i][j] = str[j];
		ptr_strtow[i][j] = '\0';
		for (; str[j] == ' '; j++)
			continue;
	}

	return (ptr_strtow);
}
