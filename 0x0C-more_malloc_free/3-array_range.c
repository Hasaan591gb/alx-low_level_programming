#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer of array
 * @max: last integer of array
 * Description: The function creates an array of int
 *		containing all values from min to max
 *		included, ordered from min to max
 * Return: a pointer to newly created array
 *	   or NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j, length;

	if (min > max)
		return (NULL);

	for (i = min, length = 0; i <= max; i++)
		length++;

	ptr = malloc(sizeof(min) * length);
	if (ptr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		*(ptr + j) = i;

	return (ptr);
}
