#include "holberton.h"

/**
 * _abs - return the absolute value
 *
 * @numero: Brings the number to evaluate
 * Return: The absolute value of number
 */
int _abs(int numero)
{
	if (numero < 0)
		return (numero * -1);
	else
		return (numero);
}
