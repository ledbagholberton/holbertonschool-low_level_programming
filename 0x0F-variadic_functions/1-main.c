#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
        print_numbers(NULL, 4, 0, 98, -1024, 402);
        print_numbers("", 4, 0, 98, -1024, 402);
        print_numbers(", ", 1, 78);
        print_numbers(", ", 1, 0);
	print_numbers(", ",0);
	return (0);
}
