#include "lists.h"

/**
 * list_len - calculates nodes in singly linked list
 * @h: pointer to head of a singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
