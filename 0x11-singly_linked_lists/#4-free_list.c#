#include "lists.h"

/**
 * free_list - free all the linked list
 *@head: head of linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	while (head)
	{
		aux = head;
		free(head->str);
		free(head);
		head = aux->next;
	}
}
