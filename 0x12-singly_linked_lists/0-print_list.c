#include "lists.h"

/**
 * print_list - prints all elements of h
 * @h: self referencing struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
	}

	return (count);
}
