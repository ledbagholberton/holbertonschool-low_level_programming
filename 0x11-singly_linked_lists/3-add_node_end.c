#include "lists.h"

/**
 * add_node_end - add new node at the end
 *@head: head of linked list
 *@str: string to be part of new node
 *
 * Return: addres of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	int cont;

	aux = *head;
	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = cont;
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
