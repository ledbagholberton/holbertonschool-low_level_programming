#include "lists.h"

/**
 * sum_dlistint - sum of nodes
 *@head: head of linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int suma;

	suma = 0;
	aux = head;
	while (aux->next != NULL)
	{
		suma = suma + aux->n;
		aux = aux->next;
	}
	if (head->next == NULL)
		return (head->n);
	else
		return (suma + aux->n);

}
