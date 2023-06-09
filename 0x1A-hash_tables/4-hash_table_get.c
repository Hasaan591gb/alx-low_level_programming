#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL && strcmp(key, tmp->key) != 0)
		tmp = tmp->next;

	return ((tmp == NULL) ? NULL : tmp->value);
}
