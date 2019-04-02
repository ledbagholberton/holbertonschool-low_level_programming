#include <stdlib.h>
#include "holberton.h"
/**
 *create_file- read and sent to stdout a number of charss.
 *
 *@filename: name of file
 *@text_content: content
 * Return: Number of printed chars.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, number, leido;

	number = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (leido = 0; text_content[leido] != '\0'; leido++)
		;
	number = write(fd, text_content, leido);
	if (number == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
