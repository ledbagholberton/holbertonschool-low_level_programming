#include "holberton.h"

void print_alphabet_x10(void)
{
	int cont;
	int letter;

	for (cont = 1; cont <=10 ; cont++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
