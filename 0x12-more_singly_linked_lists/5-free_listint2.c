#include "lists.h"

/**
 * free_listint2 - free all the linked list
 * and put head in NULL
 *@head: head of linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	aux = *head;
	if (head == NULL)
		return;
	while (*head)
	{
		aux = *head;
		free(*head);
		*head = (*aux).next;
	}
	*head = NULL;
}
