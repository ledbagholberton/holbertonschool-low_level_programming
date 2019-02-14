#include "holberton.h"

/**
 * print_diagonal - print diagonal depending of n
 *
 * @n: Size of diagonal
 * Return: No return
 */
void print_diagonal(int n)
{
	int cont, cont2;

	cont = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (cont < n)
		{
		for (cont2 = 1; cont2 <= cont; cont2++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		cont++;
		}
	}
}
