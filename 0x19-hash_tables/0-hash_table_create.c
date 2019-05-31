#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash array
 *
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		(*new_ht).array[i] = NULL;
		i++;
	}
	new_ht->size = size;
	return (new_ht);
}
