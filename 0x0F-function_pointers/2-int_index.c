#include <stdio.h>

/**
 * int_index - looks for specific integer in array
 * @array: array to look from
 * @size: size of array
 * @cmp: function to callback
 * Return: index of integer being looked
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}

	return (-1);
}
