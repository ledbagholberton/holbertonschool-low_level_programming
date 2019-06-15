#include "sort.h"
/**
 *
 *
 *
 *
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *aux2 = NULL;

        while (aux->next != NULL)
        {
		if (aux->n > aux->next->n)
		{
			swap_node(list, aux, aux->next);
			print_list(*list);
			aux2 = aux->prev;
			while (aux2->prev != NULL)
			{
				if (aux2->n < aux2->prev->n)
				{
					swap_node(list, aux2->prev, aux2);
					print_list(*list);
					aux2 = aux2->next;
				}
				else
					break;
				aux2 = aux2->prev;
			}
			aux = aux->prev;
		}
		aux = aux->next;
        }
}


void swap_node(listint_t **list, listint_t *aux1, listint_t *aux2)
{
	if (aux1->prev == NULL)
	{
		aux2->prev = NULL;
		aux2->next->prev = aux1;
		aux1->next = aux2->next;
		aux2->next = aux1;
		aux1->prev = aux2;
		*list = aux2;
	}
	else if (aux2->next == NULL)
	{
		aux1->next = NULL;
		(aux1->prev)->next = aux2;
		aux2->next = aux1;
		aux2->prev = aux1->prev;
		aux1->prev = aux2;
	}
	else
	{
		(aux1->prev)->next = aux2;
		(aux2->next)->prev = aux1;
		aux1->next = aux2->next;
		aux2->prev = aux1->prev;
		aux1->prev = aux2;
		aux2->next = aux1;
	}
}
