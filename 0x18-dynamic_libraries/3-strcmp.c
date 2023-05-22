#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: integer difference after ascii arithmetics
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] != s2[i])
		{
			if (s1[i] == '\0')
				return (-s2[i]);
			else if (s2[i] == '\0')
				return (s1[i]);
			else
				return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (0);
}
