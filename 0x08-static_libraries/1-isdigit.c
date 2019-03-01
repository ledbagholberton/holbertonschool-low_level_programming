#include "holberton.h"

/**
 * _isdigit - evaluate if input is a digit
 *
 * @c: Input to evaluate
 * Return: 1 if digit ; 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
