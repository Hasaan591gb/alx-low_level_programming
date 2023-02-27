#include "main.h"

/**
 * swap_int - swaps values of parameters
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
