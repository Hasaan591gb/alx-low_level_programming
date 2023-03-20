#include <stdio.h>
#include "main.h"

/**
 * free_dog - frees memory allocated to dog_t
 * @d: pointer to memory to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
