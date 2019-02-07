#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numero;
	int de_ayuda;

	de_ayuda = 32;
	for (numero = 48; numero <= 57 ; numero++)
	{
		putchar(numero);
		if (numero < 57)
		{
			putchar(' ');
			putchar(',');
		}
		else
			putchar('\n');
	}
	return (0);
}
