#include "main.h"

/**
 * _atoi - changes a string to integer
 *  @s: string parameter to be changed
 *  Return: integer value of string parameter
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 1;
	int flag = 0;

	while (s[i])
	{
		if (s[i] == 45)
			sign *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			flag = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (flag == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}
