# include "main.h"

/**
 * _islower - checks whether a char is lowercase or not
 * @c: c is the test character
 * Return: 1 if lowercase, 0 otherwiswe
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
