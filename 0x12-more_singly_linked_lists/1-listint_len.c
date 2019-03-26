#include "lists.h"

/**
 * listint_len - return # elements
 *@h: head of linked list
 *
 * Return: number elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h)/* also is possible while(h) */
	{
		a++;
		h = (*h).next;
	}
	return (a);
}
