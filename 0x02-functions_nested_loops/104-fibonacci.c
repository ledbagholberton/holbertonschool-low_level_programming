#include <stdio.h>

/**
 * main - print first 50 Fibonacci starting 1 & 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	int a1, a2, b1, b2, c , suma1, suma2;

	a1 = 0;
	a2 = 1;
	b1 = 0;
	b2 = 2;
	c = 0;

	printf("%d, %d, ",a2 ,b2 );
	for (cont = 0; cont <= 93; cont++)
	{
		suma1 = a1 + b1;
		if (suma1 > 10000001)
			c = (suma1 / 1000000); 
		suma1 = suma1 - c;
		suma2 = a2 + b2 + c;
		a1 = b1;
		a2 = b2;
		b1 = suma1;
		b2 = suma2;
		printf("%d:%d, ", suma1, suma2);
	}
/*	printf("%ld\n", a + b); */
	return (0);
}
