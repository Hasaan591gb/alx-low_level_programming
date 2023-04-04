#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 *			     a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *node_to_remove, *test;
	unsigned int i;

	test = *head;
	for (i = 0; test != NULL; i++)
		test = test->next;
	if (index >= i)
		return (-1);

	if (index == 0)
	{
		node_to_remove = *head;
		*head = (*head)->next;
		free(node_to_remove);
		return (1);
	}

	previous_node = *head;
	for (i = index; i != 1; i--)
		previous_node = previous_node->next;

	node_to_remove = previous_node->next;
	previous_node->next = node_to_remove->next;
	free(node_to_remove);

	return (1);
}
