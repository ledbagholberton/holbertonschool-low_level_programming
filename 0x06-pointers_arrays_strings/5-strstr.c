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
	int cont, cont2, flag;

	for (cont = 0; haystack[cont] != '\0'; cont++)
	{
		for (cont2 = 0; *needle(cont2) != '\0'; cont2++)
		{
		}
		for (cont3 = 0; *needle(cont2) == *haystack(cont + cont2) ; cont3++)
		{
		cont2++
					
			



			}
		}
		if (flag = cont2)
			return (
	}
	return (haystack + cont);
}
