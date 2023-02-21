#include "main.h"

/**
 * _isalpha - checks whether an int is an alphabet or not
 * @c: c is the test int
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
