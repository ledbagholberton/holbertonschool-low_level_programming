#include "lists.h"

/**
 * pop_listint - delete head node
 *@head: head of linked list
 *
 * Return: n value deleted
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t aux;

	if (*head == NULL)
		return (0);
	aux = **head;
	value = (*(*head)).n;
	free(*head);
	*head = (aux).next;
	return (value);
}
