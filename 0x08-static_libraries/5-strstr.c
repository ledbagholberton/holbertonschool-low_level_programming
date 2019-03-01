#include "holberton.h"
/**
 * _strstr - Find the first ocurrence of Needles
 *
 * @haystack: Looking the string needle
 * @needle: String to found in Haystack string
 * Return: Pointer to the beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	int cont, cont2, cont3, flag;

	for (cont2 = 0; needle[cont2] != '\0'; cont2++)
	{
	}
	for (cont = 0; haystack[cont] != '\0'; cont++)
	{
		flag = 1;
		for (cont3 = 0; (cont3 < cont2) && (flag == 1) ; cont3++)
		{
			if (needle[cont3] == haystack[cont + cont3])
				flag = 1;
			else
				flag = 0;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		return (haystack + cont);
	return ('\0');
}
