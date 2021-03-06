#include "lists.h"

/**
 * list_len - return # elements
 *@h: head of linked list
 *
 * Return: number elements
 */

size_t list_len(const list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)/* also is possible while(h) */
	{
		a++;
		h = (*h).next;
	}
	return (a);
}
