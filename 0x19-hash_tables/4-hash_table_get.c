#include  "hash_tables.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	char *m_key, *m_value;
	long unsigned int b, size_arr;

	size_arr = (*ht).size;
	b = key_index((unsigned char *)key, size_arr);
	if ((*ht).array[b] == NULL)
		return (NULL);
	else
	{
		tmp = (*ht).array[b];
		m_key = (*tmp).key;
		while (strcmp(key, m_key) != 0)
			tmp = (*tmp).next;
		m_value = (*tmp).value;
	}
	return (m_value);
}
