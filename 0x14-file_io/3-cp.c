#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - main program to copy files
 *@ac: arguments ccount
 *@av: arguments
 *Return: error numbers
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = cp(av[1], av[2]);
	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1 * res);
		exit(100);
	}
	return (0);
}

/**
 * cp - copy files
 *
 *@file_from: from
 *@file_to: to
 *Return: error numbers
 */


int cp(const char *file_from, char *file_to)
{
	int fd_from, fd_to, leido, escrito, cerrado;
	char buf[1024];

	escrito = cerrado = 0;
	leido = 1024;
	if (file_from  == NULL)
		return (98);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		return (99);
	while (leido == 1024)
	{
		leido = read(fd_from, buf, 1024);
		if  (leido == -1)
			return (98);
		escrito = write(fd_to, buf, leido);
		if (escrito == -1)
			return (99);
	}
	cerrado = close(fd_from);
	if (cerrado == -1)
		return (-1 * fd_from);
	cerrado = close(fd_to);
	if (cerrado == -1)
		return (-1 * fd_to);
	return (0);
}
