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
	int conta, conta2;

	for (conta = 0 ; conta <= 99 ; conta++)
			for (conta2 = 0 ; conta2 <= 99 ; conta2++)
			{
				unidades = conta % 10;
				decenas = conta / 10;
				uni2 = conta2 % 10;
				dece2 = conta2 / 10;
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
	return (0);
}
