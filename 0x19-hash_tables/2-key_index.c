#include "hash_tables.h"

/**
 * key_index - generate the key_index
 *@key: key hash table
 *@size: array size
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a, b;

	a = hash_djb2(key);
	b = a % size;
	return (b);
}
