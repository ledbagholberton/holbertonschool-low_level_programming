#include "holberton.h"

/**
 * _islower - return 1 if c is lowercase
 *
 * @c: This variable brings the character
 * Return: Return 1 if lowercase; return 0 in other cases
 */
int _islower(int c)

{
	if (c >= 90 && c <= 122)
		return (1);
	return (0);
}
