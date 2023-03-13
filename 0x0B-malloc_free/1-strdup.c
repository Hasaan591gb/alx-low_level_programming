#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies parameter string to a new address
 * @str: parameter string
 * Return: new string or NULL if exit(1)
 */
char *_strdup(char *str)
{
	int i;
	char *ptr_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	ptr_str = malloc(sizeof(char) * (i + 1));

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(ptr_str + i) = *(str + i);
	*(ptr_str + i) = *(str + i);

	return (ptr_str);
}
