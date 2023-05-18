#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL && h->prev != NULL)
		h = h->prev;
	for (; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
