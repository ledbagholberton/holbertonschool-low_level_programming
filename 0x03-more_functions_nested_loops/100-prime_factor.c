#include <stdio.h>

int main(void)
{

	long new, cont2, cont, max, numero;

	numero = 612852475143;
	new = numero;
	cont = 2;
	while (cont <= new)
	{	
		if ( new % cont != 0)
			cont++;
		else
		{
			new = new / cont;
			max = cont;
			cont = 2;
		}
	}
	printf("%ld \n", max);
}
