#include "holberton.h"

int _atoi(char *s)
{
	char *ini, *marca, *aux;
	int signo;

	ini = s;
	aux = s;
	signo = 1;
	while (*ini <= 30 || *ini >= 39)
	{
		ini++;
	}
	marca = ini;
	while (aux <= marca)
	{
		if (*aux == '-')
			signo = signo * -1;
		aux++;
	}
	if (signo < 0)
	{
		_putchar('-'); 
	}
	while (*ini >= 30 || *ini <= 39)
	{
		_putchar(*ini);
		ini++;
	}
}
