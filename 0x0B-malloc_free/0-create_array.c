#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array using malloc()
 * @size: number of elements in array
 * @c: char to initialize memory with
 * Return: initialized array of size size
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr_array = malloc(size * sizeof(char));
	if (ptr_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr_array + i) = c;
	*(ptr_array + i) = '\0';
	return (ptr_array);
}
