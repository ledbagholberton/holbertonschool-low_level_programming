#include "holberton.h"
/**
 * _strpbrk - Search a char inside string accept  in the string s
 *
 * @s: String to found the accept chars
 * @accept: Array of chars with chars to search in string s
 * Return: Pointer to first char in S which match with any char in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int cont, cont2, flag;

	flag = 0;
	for (cont = 0; flag == 0 && s[cont] != '\0'; cont++)
	{
		for (cont2 = 0; flag == 0 && accept[cont2] != '\0'; cont2++)
		{
			if (s[cont] == accept[cont2])
			{
				flag = 1;
			}
		}
	}
	if (flag == 0)
		return ('\0');
	else
		return (s + cont - 1);
}
