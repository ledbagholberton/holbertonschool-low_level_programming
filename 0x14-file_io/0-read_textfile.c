
#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile- read and sent to stdout a number of charss.
  *
  *@filename: name of file
  *@letters: number of letters
 * Return: Number of printed chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, number, leido;
	char *buf;

	number = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(1024);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	leido = read(fd, buf, letters);
	if (leido == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	number = write(1, buf, leido);
	if (number == -1 || (int)leido != number)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (number);
}
