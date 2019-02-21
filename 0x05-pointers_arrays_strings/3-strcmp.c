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
	int a;

	a = *s1 - *s2;
	return (a);
}
