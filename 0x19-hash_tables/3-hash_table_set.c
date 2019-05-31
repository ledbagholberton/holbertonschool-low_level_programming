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
	unsigned long int b, size_arr;
	int flag;

	if (strcmp(key, "") == 0)
		return (0);
	size_arr = (*ht).size;
	b = key_index((unsigned char *)key, size_arr);
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	(*new_node).key = strdup(key);
	if ((*new_node).key == NULL)
		return (0);
	(*new_node).value = strdup(value);
	if ((*new_node).value == NULL)
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
		flag = 0;
		while ((*tmp1).next != NULL)
		{
			if (strcmp((*tmp1).key, key) == 0)
			{
				(*tmp1).value = strdup(value);
				flag = 1;
			}
			else
				tmp1 = (*tmp1).next;
		}
		if (flag == 0)
		{
		(*new_node).next = tmp;
		(*ht).array[b] = new_node;
		}
	}
	return (1);
}
