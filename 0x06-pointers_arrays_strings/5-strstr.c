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
	for (cont = 0; haystack[cont] != '\0'; cont++)
	{
		for (cont2 = 0; needle[cont2] != '\0'; cont2++)
		{
			if (haystack[cont] == needle[cont2])
			{
				flag = 1;
			}
			else
				flag = 0;
