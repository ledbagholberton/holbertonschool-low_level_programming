#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int unidades;
	int decenas;
	int centenas;

	for (centenas = 48 ; centenas <= 57 ; centenas++)
	{
		for (decenas = centenas + 1 ; decenas <= 57 ; decenas++)
			for (unidades = decenas + 1 ; unidades <= 57 ; unidades++)
			{
				putchar (centenas);
				putchar (decenas);
				putchar (unidades);
				if (unidades != 57 || decenas != 56 || centenas != 55)
				{
				putchar(',');
				putchar(' ');
				}
				else
				putchar('\n');
			}
	}
	return (0);
}
