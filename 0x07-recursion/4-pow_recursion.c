#include "holberton.h"
/**
 * _pow_recursion - Raise x to powered by y
 *
 * @x: Base value
 * @y: Power' value
 * Return: results in integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else
		if (y == 0)
		return (1);
		else
		x = x *	_pow_recursion(x, y - 1);
	return (x);
}

