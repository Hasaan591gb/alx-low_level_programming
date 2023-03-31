#include "lists.h"

/**
 * add_node_end - adds node at the end of supplied singly linked list
 * @head: head of list
 * @str: str to copy into node->str
 * Return: pointer to modified list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *test;
	unsigned int length;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (str == NULL)
	{
		temp->str = NULL;
		temp->len = 0;
	}
	else
	{
		for (length = 0; str[length] != '\0'; length++)
			continue;
		temp->str = strdup(str);
		temp->len = length;
	}
	temp->next = NULL;

	test = *head;
	if (test != NULL)
	{
		while (test->next != NULL)
			test = test->next;
		test->next = temp;
	}
	else
		*head = temp;

	return (temp);
}
