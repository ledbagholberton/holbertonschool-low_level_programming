#include <stdio.h>

/**
 * main - print first 100 Fibonacci starting 1 & 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	long  max, a1, a2, b1, b2, c, suma1, suma2;

	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;
	c = 0;
	suma1 = 0;
	suma2 = 0;
	max = 1000000000000000000;

	printf("%ld, %ld, ", a2, b2);
	for (cont = 0; cont <= 95; cont++)
	{
		c = 0;
		suma2 = a2 + b2;
		if (suma2 >= max)
			c = 1;
		suma2 = suma2 - (c * max);
		suma1 = a1 + b1 + c;
		a1 = b1;
		a2 = b2;
		b1 = suma1;
		b2 = suma2;
		if (suma1 == 0)
			printf("%ld, ", suma2);
		else
		{
			if (cont != 95)
				printf("%ld%ld, ", suma1, suma2);
			else
				printf("%ld%ld\n", suma1, suma2);
		}
	}
	return (0);
}
