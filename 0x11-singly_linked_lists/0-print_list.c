#include "lists.h"

/**
 * print_list - print all the list linked
 *@h: head of linked list
 *
 * Return: Type size_t return number of of nodes in the list.
 */

size_t print_list(list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			(*h).str = "(nil)";
			(*h).len = 0;
		}
		printf("[%d] %s\n", (*h).len, (*h).str);
		a++;
		h = (*h).next;
	}
	return (a);
}

