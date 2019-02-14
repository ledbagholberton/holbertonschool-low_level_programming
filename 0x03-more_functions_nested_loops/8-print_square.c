#include "holberton.h"

/**
 * print_square - print square with size
 *
 * @size: Size of square
 * Return: No return
 */
void print_square(int size)
{
	int cont1, cont2;

	if (size <= 0)
		_putchar('\n');
	else
	for (cont1 = 1; cont1 <= size; cont1++)
	{
		for (cont2 = 1; cont2 <= size; cont2++)
			_putchar(35);
		_putchar('\n');
	}
}
