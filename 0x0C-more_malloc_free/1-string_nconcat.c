#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string parameters
 * @s1: string parameter
 * @s2: string parameter
 * @n: number of bytes to concatenate
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = 0;
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	for (i = 0; s2[i] != '\0' && i < n; i++)
		length++;

	str = malloc(sizeof(*s1) * (length + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
