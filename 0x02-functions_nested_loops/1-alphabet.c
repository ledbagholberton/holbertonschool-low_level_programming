#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * void: No input variables
 * Return: No return
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar (letter);
	_putchar('\n');
}
