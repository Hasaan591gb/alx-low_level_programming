#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a mewmory block using malloc and free
 * @ptr: pointer to originally allocated memor
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr_new, *ptr_temp;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		ptr_temp = ptr;
		for (i = 0; i < new_size && i < old_size; i++)
			*(ptr_new + i) = *(ptr_temp + i);

		free(ptr);
		ptr_temp = NULL;
	}

	return (ptr_new);
}
