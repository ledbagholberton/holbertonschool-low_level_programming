#include "holberton.h"
#include <stdio.h>
#include <string.h>
 
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hola a todos";
	char *f;

	f = _strchr(s, ' ');
	printf("%s\n", f);
	return (0);
}
