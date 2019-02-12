#include <stdio.h>

/**
 * main - print first 50 Fibonacci starting 1 & 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	long a, b, suma;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (cont = 0; cont < 47; cont++)
	{
		suma = a + b;
		a = b;
		b = suma;
		printf("%ld, ", suma);
	}
	printf("%ld\n", a + b);
	return (0);
}
