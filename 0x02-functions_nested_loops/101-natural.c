#include <stdio.h>

/**
 * main - print the sum of multiples 3 or 5 from 0 to 1023
 *
 * Return: Always 0.
 */
int main (void)
{
	int a,b;

	b = 0; 
	for (a = 0; a < 1024; a++)
		if ((a % 3 == 0 || a % 5 == 0))
			b = a + b;
	printf("%d \n", b);
	return (0);
}
