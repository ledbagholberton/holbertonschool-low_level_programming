#include "lists.h"
/**
 *reverse_listint - reverse the list
 *@head: head of list
 *
 *Return: pointer to new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t aux1, aux2, aux3;

	if (head == NULL || *head == NULL)
		return (NULL);
	aux1 = *head;
	aux3 = *head;
	aux2 = (*aux1).next;
	(*Aux1).Next = NULL;
	(*aux2).next = aux3;
	return (aux2);
}
