#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initialized with the char c 
 * @size : the size of array
 * @c: charc to fulfill in the buffer
 *
 * Return: Pointer to buffer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned cont;

	if (size == 0)
		return (NULL);

	buffer = malloc(size * sizeof(char));

	for (cont = 0; cont != size; cont++)
		buffer[cont] = c;

	return (buffer);
}
