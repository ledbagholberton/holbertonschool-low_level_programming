#include <stdio.h>

/**
 * main - return last composite numbers of specific number
 *
 * Return: Always 0.
 */
int main(void)
{
	long new, cont, max, numero;

	numero = 612852475143;
	new = numero;
	cont = 2;
	while (cont <= new)
	{
		if (new % cont != 0)
			cont++;
		else
		{
			new = new / cont;
			max = cont;
			cont = 2;
		}
	}
	printf("%ld\n", max);
	return (0);
}
