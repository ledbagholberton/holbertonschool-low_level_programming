#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;	
	char *cadena, *prueba;
	char array[5];

	cadena = malloc(5); 
	printf("%p \n",cadena);
	printf("%s \n", cadena);
	for (i=0; i<5; i++)
		*(cadena + i) = 'r';
	printf("%p \n",cadena);
        printf("%s \n", cadena);
/*	cadena = "rrrr";*/
	prueba = cadena;
	*(cadena + 1) = '#';
	printf("%s \n",cadena);
	printf("%p \n",cadena);

	for (i=0; i<5; i++)
		array[i] = 'm';
	array[i] = '\0';
	printf("%s \n",array);
	printf("%pn \n",&array);
	cadena = "Valmsdkfslksdmfks dslñfk sdfskdc ksdnfksadjfsdjfs";
	printf("%s \n",cadena);
        printf("%p \n",cadena);
	printf("%s \n",prueba);

	return (0);
}
