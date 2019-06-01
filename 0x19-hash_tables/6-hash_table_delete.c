#include "hash_tables.h"
/**
 * hash_table_delete - delete  hash table
 *@ht: hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int size_arr, i = 0;

	size_arr = (*ht).size;
	while (i < size_arr)
	{
		if ((*ht).array[i] != NULL)
		{
			tmp = (*ht).array[i];
			printf("array %lu : %p\n", i, (void*)tmp);
			free_list(tmp);
		}
		i++;
	}
	free((*ht).array);
	free(ht);
}


/**
 * free_list - free all the linked list
 *@head: head of linked list
 *
 * Return: Nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *aux;

	aux = head;
	while (head)
	{
		aux = head;
		free((*head).key);
		free((*head).value);
		free(head);
		head = (*aux).next;
	}
}
