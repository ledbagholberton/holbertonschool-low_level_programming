#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = '0' ; letter <= '9' ; letter++)
		putchar(letter);
	for (letter = 'a' ; letter <= 'f' ; letter++)
		putchar(letter);
	letter = '\n';
	putchar(letter);
	return (0);
}
