#include "lists.h"

/**
 * add_node - adds node in begining of linked list
 * @head: pointer to head of linked list
 * @str: string to copy into node->str
 * Return: address of the new element, or NULL if function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
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

	temp->next = *head;
	*head = temp;

	return (*head);
}
