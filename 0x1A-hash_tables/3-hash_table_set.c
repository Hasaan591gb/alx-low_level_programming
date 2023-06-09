#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key - cannot be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_value;
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	index = key_index(key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = dup_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(dup_value);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = NULL;
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
