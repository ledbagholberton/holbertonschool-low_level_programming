#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file- add text at the end of file
  *
  *@filename: name of file
  *@text_content: text to add
 * Return: 1 if success / -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, leido, number;

	number = 0;
	if (filename  == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
