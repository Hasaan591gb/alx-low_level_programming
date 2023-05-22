#include "main.h"

/**
 * _isupper - checks if parameter is uppercase
 * @c: parameter
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
