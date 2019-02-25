#include "holberton.h"
/**
 * print_chessboard - Print the chessboard
 *
 * @a: Size of chessboard files
 * Return: No return
 */

void print_chessboard(char (*a)[8])
{
	int rows, columns;
	char letra;

	for (rows = 0; rows <= 7; rows++)
	{
		for (columns = 0; columns <= 7; columns++)
		{
		letra = a[rows][columns];
		_putchar(letra);
		}
		_putchar('\n');
	}
}
