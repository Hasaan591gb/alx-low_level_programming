#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size_s1, length = 0;
	char *ptr_str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		length++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		length++;

	ptr_str_concat = malloc(sizeof(char) * (length + 1));

	if (ptr_str_concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr_str_concat + i) = *(s1 + i);
	size_s1 = i;
	for (i = 0; *(s2 + i) != '\0'; i++)
		*(ptr_str_concat + size_s1 + i) = *(s2 + i);
	*(ptr_str_concat + size_s1 + i) = '\0';

	return (ptr_str_concat);
}
