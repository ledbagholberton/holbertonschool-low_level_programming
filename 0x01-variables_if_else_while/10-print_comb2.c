#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int decenas;
	int unidades;

	for (decenas = 48; decenas <= 57 ; decenas++)
	{
		for (unidades = 48; unidades <= 57 ; unidades++)
		{
			putchar(decenas);
			putchar(unidades);
			if (decenas == 57 && unidades == 57)
				putchar ('\n');
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	return (0);
}
