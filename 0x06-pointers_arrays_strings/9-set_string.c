#include "holberton.h"
#include <stdio.h>
/**
 * set_string - Change the pointer to string s0 to s1
 *
 * @s: Pointer to pointer
 * @to: Pointer to dest
 * Return: No return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
