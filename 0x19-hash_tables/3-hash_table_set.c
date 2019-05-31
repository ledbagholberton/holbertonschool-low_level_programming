#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	long unsigned int b, size_arr;

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	size_arr = (*ht).size;
	b = key_index((unsigned char *)key, size_arr);
	(*new_node).key = strdup(key);
	(*new_node).value = strdup(value);
	if ((*ht).array[b] == NULL)
	{
		(*ht).array[b] = new_node;
		(*new_node).next = NULL;
	}
	else
	{
		tmp = (*ht).array[b];
		(*new_node).next = tmp;
		(*ht).array[b] = new_node;
	}
	return (1);
}
