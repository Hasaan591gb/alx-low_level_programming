#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t **nodes;
	size_t i;

	if (head == NULL)
		exit(98);

	nodes = malloc(sizeof(*nodes) * 1024);
	if (nodes == NULL)
		exit(98);

	while (head)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(nodes);
				exit(98);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		nodes[count++] = head;
		head = head->next;
	}

	free(nodes);
	return (count);
}
