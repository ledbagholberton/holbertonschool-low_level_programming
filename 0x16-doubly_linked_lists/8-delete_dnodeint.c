#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node
 *@head: head of linked list
 *@index: position to delete
 * Return: 1 if success/ -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux0, *aux1, *aux2;
	unsigned int cont;

	aux1 = *head;
	cont = 1;
	if (index == 0)
	{
		*head = aux1->next;
		aux1->prev = NULL;
	}
	else
	{
		while (index <= cont)
		{
			aux1 = aux1->next;
			cont++;
		}
		if (index > cont)
			return (-1);
		if (aux1->next == NULL)
		{
			aux0 = aux1->prev;
			aux0->next = NULL;
		}
		else
		{
			aux0 = aux1->prev;
			aux2 = aux1->next;
			aux0->next = aux2;
			aux2->prev = aux0;
			free(aux1);
		}

	}
	return (1);
}
