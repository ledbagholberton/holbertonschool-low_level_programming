#include "lists.h"

/**
 * free_list - free all the linked list
 *@head: head of linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *aux, *aux2;

	aux = head;
	while (aux)
	{
		aux2 = aux;
		free(aux->str);
		free(aux);
		aux = aux2->next;
	}
}
