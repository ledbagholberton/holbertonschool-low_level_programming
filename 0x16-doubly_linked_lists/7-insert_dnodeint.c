#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node
 *@h: head of linked list
 *@n: number in new node
 *@idx: position to insert
 * Return: addres of new element or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux1, *aux2;
	unsigned int cont;

	aux1 = *h;
	cont = 1;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		while (idx != cont)
		{
			aux1 = aux1->next;
			cont++;
		}
		if (aux1->next == NULL)
			add_dnodeint_end(h, n);
		else
		{
			aux2 = aux1->next;

			aux1->next = new;
			new->prev = aux1;
			new->next = aux2;
			aux2->prev = new;
		}
	}
	return (new);
}
