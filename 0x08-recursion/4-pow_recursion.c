#include "main.h"

/**
 * _pow_recursion - recursively increase power of x by y
 * @x: value whose power to raise
 * @y: power to raise to
 * Return: final value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
