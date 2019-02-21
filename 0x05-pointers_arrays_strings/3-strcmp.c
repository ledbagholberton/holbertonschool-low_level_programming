#include "holberton.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: Address of string 1
 * @s2: Address of string 2
 * Return: int value with difference ASCII first char in string
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
			flag = 1;
	}
	return (a);
}
