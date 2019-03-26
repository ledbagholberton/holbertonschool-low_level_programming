#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 *@head: head of linked list
 *@n: integer to be part of new node
 *
 * Return: addres of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while ((*aux).next != NULL)
		{
			aux = (*aux).next;
		}
		(*aux).next = new;
	}
	return (new);
}
