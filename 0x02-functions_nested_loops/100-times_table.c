#include "holberton.h"

/**
 * print_times_table - print the times table until n
 *
 * @n: n times table
 * Return: No return
 */

void print_times_table(int n)
{
	int a, b, resultado, unidades, decenas, centenas;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
		{
		for (b = 0; b <= n; b++)
			{
			resultado = a * b;
			centenas = resultado / 100;
			decenas = ((resultado / 10) % 10);
			unidades = ((resultado % 100) % 10);
			if (b != 0)
			{
				if (centenas == 0)
				{
					centenas = -16;
					if (decenas == 0)
						decenas = -16;
				}
				_putchar(centenas + '0');
				_putchar(decenas + '0');
				_putchar(unidades + '0');
			}
			else
				_putchar('0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
			}
		}
	}
}
