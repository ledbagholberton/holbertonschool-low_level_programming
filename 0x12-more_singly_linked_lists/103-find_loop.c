#include "lists.h"

/**
 * find_listint_loop - check the code for Holberton School students.
 *@head: head od linked list
 *
 * Return: Node of loops.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t aux, aux2;
while (aux2 != NULL && aux2->next != NULL)
{
aux = aux->next;
aux2 = aux2->next->next;
if (aux = aux2)
{
q = *head;
while (aux != aux2)
{
aux = aux->next;
aux2->aux2->next;
}
}
return(p);
}
