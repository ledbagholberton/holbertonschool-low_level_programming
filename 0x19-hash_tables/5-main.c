#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "hetairas", "and Jay love asm");
	hash_table_print(ht);
	hash_table_set(ht, "mentioner", "and now with mentioner");
	hash_table_print(ht);
	hash_table_set(ht, "holberton", "so-cool");
	hash_table_print(ht);
	hash_table_set(ht, "holberton", "so-cooooooool");
	hash_table_print(ht);
	hash_table_set(ht, "holberton", "is awesomeeeeeeeeee");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
