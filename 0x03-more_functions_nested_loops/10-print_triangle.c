#include "holberton.h"

/**
 * print_triangle - print a triangle with base size
 *
 * @size: Size of triangle
 * Return: No return
 */
void print_triangle(int size)
{
	int aux, cont1, cont2, cont3;

	if (size > 0)
	{
		for (cont1 = 1; cont1 <= size; cont1++)
		{
			cont3 = cont1;
			cont2 = size - cont1;
			for (aux = 1; aux <= cont2; aux++)
				_putchar(' ');
			for (aux = 1; aux <= cont3; aux++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
