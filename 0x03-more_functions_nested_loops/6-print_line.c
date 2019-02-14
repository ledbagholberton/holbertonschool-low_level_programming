#include "holberton.h"

/**
 * print_line - print a line with size n
 *
 * @n: Size of line
 * Return: No return
 */
void print_line(int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
		_putchar(95);
	_putchar('\n');
}
