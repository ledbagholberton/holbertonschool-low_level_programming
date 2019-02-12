#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * void: No input variables
 * Return: No return
 */
void print_alphabet_x10(void)
{
	int cont;
	int letter;

	for (cont = 1; cont <= 10 ; cont++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
