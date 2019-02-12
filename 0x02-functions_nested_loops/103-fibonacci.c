#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a, b, suma, suma_pares;

	a = 1;
	b = 2;
	suma_pares = 0;
	suma = 0;
	while (suma <= 4000000)
	{
		suma = a + b;
		a = b;
		b = suma;
		if (a % 2 == 0)
			suma_pares = a + suma_pares;
	}
	printf("%ld\n", suma_pares);
	return (0);
}
