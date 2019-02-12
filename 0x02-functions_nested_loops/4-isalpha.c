#include "holberton.h"

/**
 * _isalpha - return 1 if input is a letter
 *
 * @c: Bring the character to evaluate
 * Return: Return  if character is a letter; 0 in other cases
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
