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
	{
		unidades = (conta % 10) + 48;
		decenas = (conta / 10) + 48;
		for (conta2 = conta + 1 ; conta2 <= 99 ; conta2++)
		{
			putchar (decenas);
			putchar (unidades);
			putchar (' ');
			uni2 = (conta2 % 10) + 48;
			dece2 = (conta2 / 10) + 48;
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
