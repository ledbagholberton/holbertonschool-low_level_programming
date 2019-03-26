#include "lists.h"

/**
 * add_nodeint - add new node at the beggining
 *@head: head of linked list
 *@n: integer to be part new node
 *
 * Return: addres of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).next = *head;
	(*new).n = n;
	*head = new;
	return (*head);
}
