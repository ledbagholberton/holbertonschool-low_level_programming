#include <stdio.h>

/**
 * main - return Fizz or Buzz dpending multiples 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;

	for (cont = 1; cont <= 99; cont++)
	{
		if (cont % 3 == 0 && cont % 5 == 0)
			printf("FizzBuzz ");
		else
		{
			if (cont % 3 == 0)
			printf("Fizz ");
			if (cont % 5 == 0)
			printf("Buzz ");
		}
		if (cont % 3 != 0 && cont % 5 != 0)
			printf("%d ", cont);
	}
	printf("Buzz\n");
	return (0);
}
