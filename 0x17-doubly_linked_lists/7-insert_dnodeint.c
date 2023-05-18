#include "lists.h"

dlistint_t *alloc_mem(int n);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: The index of the list where the new node should be added
 * @n: The data for the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *tmp2 = *h;

	tmp = alloc_mem(n);
	if (idx == 0)
	{
		if (*h == NULL)
			*h = tmp;
		else
		{
			tmp->next = *h;
			(*h)->prev = tmp;
			*h = tmp;
		}
		return (tmp);
	}

	while (tmp2 != NULL)
	{
		if ((i + 1) == idx)
		{
			if (tmp2->next == NULL)
			{
				tmp2->next = tmp;
				tmp->prev = tmp2;
				return (tmp);
			}
			tmp->prev = tmp2;
			tmp->next = tmp2->next;
			tmp2->next->prev = tmp;
			tmp2->next = tmp;
			return (tmp);
		}
		tmp2 = tmp2->next;
		i++;
	}

	free(tmp);
	return (NULL);
}

/**
 * alloc_mem - Allocates memory for a new dlistint_t node
 * @n: The data for the new node
 *
 * Return: A pointer to the newly allocated node, or NULL if it failed
 */
dlistint_t *alloc_mem(int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;

	return (tmp);
}
