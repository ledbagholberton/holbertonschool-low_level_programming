#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: Address of string 1
 * @s2: Address of string 2
 * Return: 0 if they are equals else return 1
 */

int _strcmp(char *s1, char *s2)
{
	char *str1, *str2;
	int a, flag;

	str1 = s1;
	str2 = s2;
	a = 0;
	flag = 0;
	while ((*str1 != '\0' || *str2 != '\0') && flag == 0)
	{
		a = *str1 - *str2;
		if (a == 0)
		{
			str1++;
			str2++;
		}
		else
		{
			flag = 1;
			a = 1;
		}
	}
	return (a);
}

/**
 * infinito_add - add two strings
 *
 * @n1: First char number
 * @n2: Second char number
 *
 * Return: Pointer to char result
 */

char *infinito_add(char *n1, char *n2, char *suma)
{
	int a, u, d, cont, cont2;
	char *aux1, *aux2;

	aux1 = n1;
	aux2 = n2;

	for (cont = 0; aux1[cont] != '\0' ; cont++);
	for (cont2 = 0; aux2[cont2] != '\0' ; cont2++);
	d = 0;
	cont--;
	cont2--;
	while (!( cont < 0 || cont2 < 0))
	{
		a = (aux1[cont] - 48) + (aux2[cont2] - 48) + d;
		u = a % 10;
		d = a/10;
		suma[cont] = u + 48;
		cont--;
		cont2--;
	}
	return(suma);
}

/**
 * main - two string multiplication
 * @argc: counter args
 * @argv: args string pointer
 *
 * Return: 98 in case error.
 */

int main(int argc, char *argv[])
{
        char *resul, *str_uno, *multi;
        int i, cont1, cont2, size;

        argc = argc;
	str_uno = "1";
 
        for (i = 0; argv[1][i] != '\0'; i++)
        {
                if (!(argv[1][i] >= 48 && argv[1][i] <= 57))
                {
                        printf("Error\n");
                        exit(98);
                }
        }
        cont1 = i;

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!(argv[2][i] >= 48 && argv[2][i] <= 57))
		{
			printf("Error\n");
			exit(98);
		}
	}

	cont2 = i;
	size = cont1 + cont2 + 1;
	resul = malloc(sizeof(char) * size);
	if (resul == (NULL))
		return (0);
	for (i = 0; i < size; i++)
		resul[i] = '0';
	resul[i] = '\0';

	multi = malloc(sizeof(char) * cont1);
	if (multi == (NULL))
		return (0);
	for (i = 0; i < size; i++)
                multi[i] = '0';
        multi[i] = '\0';

	while (_strcmp(argv[1], multi) == 1)
	{
		resul = infinito_add(resul, argv[2], resul);
		multi = infinito_add(multi, str_uno, multi);
	}

	printf("La suma es: %s", resul);
	return (0);
}
