#include "holberton.h"

/**
 * jack_bauer - print the 24 hours in format HH:MM
 *
 * void: No input variables
 * Return: No return
 */

void jack_bauer(void)
{
	int horas;
	int minutos;

	for (horas = 0; horas < 24; horas++)
		for (minutos = 0; minutos < 60; minutos++)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((minutos / 10) + '0');
			_putchar((minutos % 10) + '0');
			_putchar('\n');
		}
}

