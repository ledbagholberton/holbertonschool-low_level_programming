#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
//	print_listint(head);
	printf("Prueba en posicion 0\n");
	insert_nodeint_at_index(&head, 0, 4096);
	print_listint(head);
	free_listint2(&head);
	head = NULL;
        add_nodeint_end(&head, 0);
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 2);
        add_nodeint_end(&head, 3);
        add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
//        print_listint(head);
        printf("Prueba en posicion 1\n");
        insert_nodeint_at_index(&head, 1, 4096);
        print_listint(head);
        free_listint2(&head);
	head = NULL;
        add_nodeint_end(&head, 0);
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 2);
        add_nodeint_end(&head, 3);
        add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
//        print_listint(head);
        printf("Prueba en posicion 3\n");
        insert_nodeint_at_index(&head, 3, 4096);
        print_listint(head);
        free_listint2(&head);
	head = NULL;
        add_nodeint_end(&head, 0);
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 2);
        add_nodeint_end(&head, 3);
        add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
//        print_listint(head);
        printf("Prueba en posicion 5\n");
        insert_nodeint_at_index(&head, 5, 4096);
        print_listint(head);
        free_listint2(&head);
	head = NULL;
        add_nodeint_end(&head, 0);
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 2);
        add_nodeint_end(&head, 3);
        add_nodeint_end(&head, 4);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 402);
        add_nodeint_end(&head, 1024);
//        print_listint(head);
        printf("Prueba en posicion 10\n");
        insert_nodeint_at_index(&head, 10, 4096);
        print_listint(head);
        free_listint2(&head);
	return (0);
}
