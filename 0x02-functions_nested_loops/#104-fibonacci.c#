#include <stdio.h>

/**
 * main - print first 50 Fibonacci starting 1 & 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	unsigned long a, b, suma;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (cont = 0; cont <= 96; cont++)
	{
		suma = a + b;
		a = b;
		b = suma;
		printf("%d %ld, ", cont + 2, suma);
	}
	printf("%ld\n", a + b);
	return (0);
}
