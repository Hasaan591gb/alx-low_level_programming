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
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
