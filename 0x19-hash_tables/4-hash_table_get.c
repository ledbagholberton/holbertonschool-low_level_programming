#include  "hash_tables.h"
/**
 * hash_table_get - get table hash
 *@ht: hash table
 *@key: key
 * Return: Value from node with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	char *m_key, *m_value;
	unsigned long int b, size_arr;

	size_arr = (*ht).size;
	b = key_index((unsigned char *)key, size_arr);
	if ((*ht).array[b] == NULL)
		return (NULL);
	tmp = (*ht).array[b];
	m_key = (*tmp).key;
	while (strcmp(key, m_key) != 0)
		tmp = (*tmp).next;
	m_value = (*tmp).value;
	return (m_value);
}
