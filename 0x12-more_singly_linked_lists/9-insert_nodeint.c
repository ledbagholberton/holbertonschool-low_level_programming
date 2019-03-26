#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node in the idx position
 *@head: head of linked list
 *@idx: reference to N-th node
 *@n: Integer to insert
 * Return: The address of new node / NULL if fail or is not possible index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont;
	listint_t *aux, *new;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		(*new).next = aux;
		(*new).n = n;
		*head = new;
	}
	else
	{
		for (cont = 1; cont < idx; cont++)
		{
			if ((*aux).next == NULL)
				return (NULL);
			aux = (*aux).next;
		}
		(*new).n = n;
		(*new).next = (*aux).next;
		(*aux).next = new;
	}
return (new);
}
