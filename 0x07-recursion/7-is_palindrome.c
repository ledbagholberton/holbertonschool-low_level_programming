#include "holberton.h"

/**
 * contar - cuenta longitud
 *
 * @s: Pointer to string
 * @conteo: Contador
 * Return: Integer with long
 */
int contar(char *s, int conteo)
{
	if (*s != '\0')
	{
		conteo = contar(s + 1, conteo);
	}
	conteo++;
	return (conteo);
}

/**
 * comparar - compare string letter by letter
 *
 * @s: Pointer to string 1
 * @m: Pointer to string 2
 * Return: Integer 1 if equals / 0 if not equal
 */
int comparar(char *s, char *m)
{
	if (*s != *m)
		return (0);
	if (*s == *m)
	{
		comparar((s + 1), (m - 1));
		return (1);
	}
	return (1);
}

/**
 * is_palindrome - xreview if the word is palindrome
 *
 * @s: Pointer to string
 * Return: Integer 1 if equal / 0 if not equal
 */
int is_palindrome(char *s)
{
	int b, contador;
	char *m;

	contador = 0;
	contador = contar(s, contador);
	contador--;
	contador--;
	m = s + contador;
	b = comparar(s, m);
	return (b);
}
