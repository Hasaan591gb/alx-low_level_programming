#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

float largest_number(float a, float b, float c)
{
	float largest;

	if (a >= b)
	{
		if (a >= c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b >= c)
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
