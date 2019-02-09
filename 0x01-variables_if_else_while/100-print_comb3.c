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

	for (decenas = 48 ; decenas <= 57 ; decenas++)
		for (unidades = decenas + 1 ; unidades <= 57 ; unidades++)
		{
			putchar (decenas);
			putchar (unidades);
			if (unidades != 57 || decenas != 56)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	return (0);
}
