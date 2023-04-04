#include "lists.h"

/**
 * listint_len - calculates number of elements in a linked listint_t list
 * @h: pointer to head of a singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
