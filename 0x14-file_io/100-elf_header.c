#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *@ac: counter
 *@av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *str1 = "  Magic:   ";
	char *str2 = "  Class:                           ";
	char *str3 = "  Data:                            ";
	char *str4 = "  Version:                         ";
	char *str5 = "  OS/ABI:                          ";
	char *str6 = "  ABI Version:                     ";
	char *str7 = "  Type:                            ";
	char *str8 = "  Entry point address:             ";
	char *elf1 = "ELF32";
	char *elf2 = "ELF64";
	char *data1 = "2's complement, little endian";
	char *data2 = "2's complement, big endian";
	char *version = "1 (current)";
	char *OS[15];
	char *ABI = "0";
	char *type = "EXEC (Executable File)";
	char *a1, *a2, *a3, *a4, *a5, *a6;
	int res, fd_from, fd_to, leido, escrito, cerrado;
	char buf[32];

	OS[0] = "UNIX - ";
	OS[1] = "System V";
	OS[2] = "HP-UX";
	OS[3] = "NetBSD";
	OS[4] = "Linux";
	OS[5] = "AIX";
	OS[6] = "IRIX";
	OS[7] = "FreeBSD";
	OS[8] = "Tru64";
	OS[9] = "Novell Modesto";
	OS[10] = "OpenBSD";
	OS[11] = "OpenVMS";
	OS[12] = "NonStop Kernel";
	OS[13] = "AROS";
	OS[14] = "Fenix OS";
	OS[15] = "CloudABI";

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Error\n");
		exit(98);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error\n");
		exit(98);
	}
	leido = read(fd_from, buf, 32);
	if  (leido == -1)
	{
		dprintf(STDERR_FILENO, "Error\n");
		exit(98);
	}
	if (!(buf[0] == 0x7f && buf[1] == 0x45 && buf[2] == 0x4c && buf[3] == 0x46))
	{
		dprintf(STDERR_FILENO, "Error\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("%s", str1);
	for (res = 0; res <= 15; res++)
		printf("%02x ", buf[res]);
	printf("\n");

	a1 = (buf[5] == 1) ? elf2 : elf1;
	a2 = (buf[6] == 0) ? data2 : data1;
	for (res = 0; res <= buf[7]; res++)
		;
	a5 = OS[res];
	printf("%s%s\n%s%s\n%s%s\n%sUNIX - %s\n%s%s\n%s%s\n", str2, a1, str3, a2, str4, version, str5, a5, str6, ABI, str7, type);
	if (buf[4] == 1)
	{
		printf("%s0x", str8);
		for (res = 18; res <= 21; res++)
			printf("%x", buf[res]);
		printf("\n");
	}
	else
	{
		printf("%s0x", str8);
		for (res = 18; res <= 25; res++)
			printf("%x", buf[res]);
		printf("\n");
	}
	cerrado = close(fd_from);
	if (cerrado == -1)
		return (98);
	return (0);
}
