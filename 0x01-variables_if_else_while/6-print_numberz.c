#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 48 ; letter <= 57 ; letter++)
	{
	putchar(letter);
	}
	letter = '\n';
	putchar(letter);
	return (0);
}

