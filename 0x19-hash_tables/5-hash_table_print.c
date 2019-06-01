#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 *@ht: hash table
 * Return: Non return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	char *m_key, *m_value;
	unsigned long int size_arr, i, flag = 0;

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
				if (flag == 0)
				{
					printf("'%s': '%s'", m_key, m_value);
					flag = 1;
				}
				else
					printf(", '%s': '%s'", m_key, m_value);
				tmp = (*tmp).next;
			}
			m_key = (*tmp).key;
			m_value = (*tmp).value;
			if (flag == 0)
			{
				printf("'%s': '%s'", m_key, m_value);
				flag = 1;
			}
			else
				printf(", '%s': '%s'", m_key, m_value);
		}
		i++;
	}
	printf("}\n");
}
