#include "hash_tables.h"

/**
 * hash_table_set - set hash table
 *@ht: hash table
 *@key: key hash table
 *@value: value hash table
 * Return: o if failure / 1 if success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp, *tmp1;
	unsigned long int size_arr, b;
	int flag = 0;

	if (strcmp(key, "") == 0)
		return (0);
	size_arr = (*ht).size;
	b = key_index((unsigned char *)key, size_arr);
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	if ((*ht).array[b] == NULL)
	{
		(*ht).array[b] = new_node;
		(*new_node).next = NULL;
	}
	else
	{
		tmp = (*ht).array[b];
		tmp1 = tmp;
		do {
			if (strcmp((*tmp1).key, key) == 0)
			{
				free((*tmp1).value);
				(*tmp1).value = strdup(value);
				free((*new_node).value);
				free((*new_node).key);
				free(new_node);
				flag = 1;
			}
			else
				tmp1 = (*tmp1).next;
		} while ((tmp1 != NULL) && (flag == 0));
		if (flag == 0)
		{
		(*new_node).next = tmp;
		(*ht).array[b] = new_node;
		}
	}
	return (1);
}

/**
 * create_node - create a node
 *@key: key hash table
 *@value: value hash table
 * Return:New node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	(*new_node).key = strdup(key);
	(*new_node).value = strdup(value);
	if (((*new_node).value == NULL) || ((*new_node).key == NULL))
	{
		free((*new_node).value);
		free((*new_node).key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
