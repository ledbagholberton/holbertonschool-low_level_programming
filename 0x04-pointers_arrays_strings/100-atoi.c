#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - return string numbers in a string
 *
 * @s: Pointer to string
 * Return: Number to be printed
 */


int _atoi(char *s)
{
	char *ini, *marca, *aux;
	int cont, cont2, signo, numero, potencia;

	ini = s;
	aux = s;
	signo = 1;
	while (*ini <= 30 || *ini >= 39)
		ini++;
	marca = ini;
	while (aux <= marca)
	{
		if (*aux == '-')
			signo = signo * -1;
		aux++;
	}
	while (*ini >= 30 || *ini <= 39)
	{
		ini++;
	}
	numero = *ini;
	for (cont = 1; ini != marca; cont++)
	{
		ini--;
		for (potencia = 10, cont2 = cont - 1 ; cont2 > 0; cont2--)
			potencia = 10 * potencia;
		numero = numero + *ini * potencia;
	}
	return (numero);
}
