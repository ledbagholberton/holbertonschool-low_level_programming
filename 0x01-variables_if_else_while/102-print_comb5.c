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
	int uni2;
	int dece2;

	for (decenas = 48 ; decenas <= 57 ; decenas++)
		for (unidades = 48 ; unidades <= 57 ; unidades++)
		{
			for (dece2 = decenas ; dece2 <= 57 ; dece2++)
				for (uni2 = unidades + 1 ; uni2 <= 57 ; uni2++)
				{
					putchar (decenas);
					putchar (unidades);
					putchar (' ');
					putchar (dece2);
					putchar (uni2);
					if (decenas != 57 || unidades != 56 || dece2 != 57 || uni2 != 57)
					{
						putchar (',');
						putchar (' ');
					}
					else
						putchar ('\n');
				}
		}
	return (0);
}
