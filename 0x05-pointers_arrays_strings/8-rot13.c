#include "holberton.h"
/**
 * root13 - encodes in rot13
 *
 * @str: Address of string
 * Return: Return pointer to string
 */
char *rot13(char *str)
{
	char *aux;
	char src[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int flag, cont, cont2;

	flag = 0;
	aux = str;
	for (cont = 0 ; aux[cont] != '\0'; cont++)
	{
		for (cont2 = 0; src[cont2] != '\0' && flag == 0; cont2++)
		{
			if (aux[cont] == src[cont2])
			{
				aux[cont] = dest[cont2];
				flag = 1;
			}
		}
	flag = 0;
	}
return (str);
}
