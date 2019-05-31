#include "hash_tables.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	char *m_key, *m_value;
	long unsigned int size_arr, i;

	size_arr = (*ht).size;
	i = 0;
	printf("{");
	while (i < size_arr)
	{
		if ((*ht).array[i] != NULL)
		{
			tmp = (*ht).array[i];
			while ((*tmp).next != NULL)
			{
				m_key = (*tmp).key;
				m_value = (*tmp).value;
				printf("'%s': '%s', ",m_key, m_value);
				tmp = (*tmp).next;
			}
			m_key = (*tmp).key;
			m_value = (*tmp).value;
			printf("'%s': '%s', ",m_key, m_value);
		}
		i++;
	}
	printf("}\n");

}
