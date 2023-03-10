#include "main.h"

/**
 * _abs - print absolute value of parameter to console
 * @x: parameter to check
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
	return (0);
}
