#include <stdio.h>

/**
 * my_ctor - constructor to print before main.
 *
 * Return: Always 0.
 */

void __attribute__ ((constructor)) my_ctor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
