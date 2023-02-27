#include "main.h"

/**
 * rev_string - reverse string parameter
 * @s: string parameter
 */
void rev_string(char *s)
{
	int n, m;

	m = 0;
	n = _strlen(s);
	for (; s[n] != s[0]; n--)
	{
		if (s[n] == '\0')
			continue;
		s[n] = s[m];
		m++;
	}
	s[m] = '\0';
}
