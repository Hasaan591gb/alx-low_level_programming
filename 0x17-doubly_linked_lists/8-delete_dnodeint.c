#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at given
 *				index of a dlistint_t linked list
 * @head: Double pointer to the head of the list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	while (tmp != NULL)
	{
		if (i == index)
		{
			if (tmp->prev == NULL)
			{
				*head = tmp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else if (tmp->next == NULL)
				tmp->prev->next = NULL;
			else
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
