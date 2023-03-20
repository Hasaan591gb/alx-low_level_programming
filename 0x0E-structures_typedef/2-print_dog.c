#include "main.h"

/**
 * print_dog - prints elements of dog
 * @d: pointer to dog variable
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		prinf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
