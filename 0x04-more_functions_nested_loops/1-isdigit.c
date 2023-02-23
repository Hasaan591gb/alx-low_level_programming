#include "main.h"

/**
 * _isdigit - checks if parameter is uppercase
 * @c: parameter
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
