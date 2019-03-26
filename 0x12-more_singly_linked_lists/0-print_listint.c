#include "lists.h"

/**
 * print_listint - print all the list linked
 *@h: head of linked list
 *
 * Return: Type size_t return number of of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		a++;
		h = (*h).next;
	}
	return (a);
}
