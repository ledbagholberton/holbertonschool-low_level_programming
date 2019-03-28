#include "lists.h"

/**
 * print_listint_safe - print all the list linked
 *@head: head of linked list
 *
 * Return: Type size_t return number of of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux1, *aux2;
	int cont = 0;

	aux1 = head;
	aux2 = head;
	while (aux1 != aux2 || aux2->next != NULL || aux2->next->next != NULL)
	{
		printf("[%p] %d\n", (void *)aux1, aux1->n);
		aux1 = aux1->next;
		aux2 = aux2->next->next;
	}
	aux2 = head;
	while (aux1 != aux2 || aux1->next != NULL)
	{
		printf("[%p] %d\n", (void *)aux1, aux1->n);
		aux1 = aux1->next;
		aux2 = aux2->next;
		cont++;
	}
	return (cont);
}
