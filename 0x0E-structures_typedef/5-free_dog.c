#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to dog_t
 * @d: pointer to memory to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
