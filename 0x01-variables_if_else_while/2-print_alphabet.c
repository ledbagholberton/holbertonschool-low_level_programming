#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
	putchar(letter);
	}
	letter = '\n';
	putchar(letter);
	return (0);
}
