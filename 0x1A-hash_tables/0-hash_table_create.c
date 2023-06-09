#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;
	unsigned long int i;

	my_hash = malloc(sizeof(hash_table_t));
	if (my_hash == NULL)
		return (NULL);

	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		my_hash->array[i] = NULL;

	return (my_hash);
}
