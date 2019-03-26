#include "lists.h"

/**
 * free_listint - free all the linked list
 *@head: head of linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;
	while (head)
	{
		aux = head;
		free(head);
		head = (*aux).next;
	}
}
