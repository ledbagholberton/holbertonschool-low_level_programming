#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("c", 'Y');
	print_all("i", 87);
	print_all("s", "hola ...");
	print_all("cirtes", 0, 0, NULL);
	print_all("sirtes", NULL, 0, NULL);

	print_all("eee", 'H', 0, "lberton");
	return (0);
}
