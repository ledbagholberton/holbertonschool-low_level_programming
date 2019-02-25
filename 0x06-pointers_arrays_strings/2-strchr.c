#include"holberton.h"
/**
 * _strchr - Locates a char in a strings
 *
 * @s: String to found the character
 * @c: Character to be located
 * Return: Pointer in string S where was located the char
 */

char *_strchr(char *s, char c)
{
	char *aux1;
	int cont, flag;

	aux1 = s;
	flag = 0;

	for (cont = 0;  flag == 0 && s[cont] != '\0'; cont++)
	{
		aux1++;
		if (s[cont] == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return ('\0');
	else
		return (aux1 - 1);
}
