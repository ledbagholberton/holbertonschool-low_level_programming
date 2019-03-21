#include "lists.h"

/**
 * add_node - add new node at the beggining
 *@head: head of linked list
 *@str: string to be part of new node
 *
 * Return: addres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = *head;
	*head = new;
	return (*head);
}
