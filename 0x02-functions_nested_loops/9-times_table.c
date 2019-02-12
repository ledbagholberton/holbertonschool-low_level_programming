#include "holberton.h"

/**
 * times_table - print the times table until 9
 *
 * void: No input variables
 * Return: No return
 */

void times_table(void)
{
	int a, b, resultado;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			resultado = a * b;
			if (b == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (resultado / 10 == 0)
					_putchar(' ');
				else
					_putchar(resultado / 10 + '0');
				_putchar(resultado % 10 + '0');
				if (b != 9)
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
