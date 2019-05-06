#include "holberton.h"
/**
 * _strspn - Found the longitud o string with characters in string accept
 *
 * @s: String to look the string accept
 * @accept: String with chars to search in String s
 * Return: Integer with longitud of first chars wihic mathc wit accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont, cont2, cont3, flag;

	flag = 1;
	cont3 = 0;

	for (cont = 0; flag == 1 && s[cont] != '\0'; cont++)
	{
		flag = 0;
		for (cont2 = 0; flag == 0 && accept[cont2] != '\0'; cont2++)
		{
			if (s[cont] == accept[cont2])
			{
				cont3++;
				flag = 1;
			}
		}
	}
	return (cont3);
}
