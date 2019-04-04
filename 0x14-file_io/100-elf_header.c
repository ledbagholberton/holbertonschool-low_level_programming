#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * header - print magic header
 *@buffer: buffer
 *
 *Return: No available
 */
void header(char *buffer)
{
	char *str1 = "  Magic:   ";
	int res;

	printf("%s", str1);
	for (res = 0; res <= 30; res++)
		printf("%02x ", buffer[res]);
	printf("\n");
}

/**
* elf_data - print elf & data & version.
*@buffer: buffer
* Return: No returrn.
*/
void elf_data(char *buffer)
{
	char *str2 = "  Class:                           ";
	char *elf1 = "ELF32";
	char *elf2 = "ELF64";
	char *str3 = "  Data:                            ";
	char *data1 = "2's complement, little endian";
	char *data2 = "2's complement, big endian";
	char *str4 = "  Version:                         ";
	char *ver1 = "1 (current)";
	char *a1, *a2, *a3;

	a1 = (buffer[5] == 1) ? elf2 : elf1;
	a2 = (buffer[6] == 0) ? data2 : data1;
	a3 = ver1;

	printf("%s%s\n%s%s\n%s%s\n", str2, a1, str3, a2, str4, a3);
}

/**
 * os - print os.
 *@buffer: buffer
 * Return: No return.
 */
void os(char *buffer)
{
	char *str5 = "  OS/ABI:                          ";
	char *OS[18], *a5;
	int res;

	OS[1] = "UNIX - System V";
	OS[2] = "UNIX - HP-UX";
	OS[3] = "UNIX - NetBSD";
	OS[4] = "UNIX - Linux";
	OS[5] = "GNU/Hurd";
	OS[6] = "UNIX - Solaris";
	OS[7] = "UNIX - AIX";
	OS[8] = "UNIX - IRIX";
	OS[9] = "UNIX - FreeBSD";
	OS[10] = "UNIX - TRU64";
	OS[11] = "Novell - Modesto";
	OS[12] = "UNIX - OpenBSD";
	OS[13] = "VMS - OpenVMS";
	OS[14] = "HP - Non-Stop Kernel";
	OS[15] = "Amiga Research OS";
	OS[16] = "Standalone App";
	OS[17] = "ARM";

	if (buffer[7] >= 18)
		printf("%s<unknown: %x>\n", str5, buffer[7]);
	else
	{
		for (res = 0; res <= buffer[7]; res++)
			;
		a5 = OS[res];
		printf("%s%s\n", str5, a5);
	}
}

/**
 * abi_type - print abi & type
 *@buffer: buffer
 * Return: No return.
 */
void abi_type(char *buffer)
{
	char *str6 = "  ABI Version:                     ";
	char *str7 = "  Type:                            ";
	char *type[5], *a6, *a7;
	int res;

	type[0] = "NONE (No file type)";
	type[1] = "REL (Relocatable file)";
	type[2] = "EXEC (Executable file)";
	type[3] = "DYN (Shared object file)";
	type[4] = "CORE (Core file)";

	printf("Type es: %x\n", buffer[16]);
	for (res = 0; res < buffer[16]; res++)
		;
	a6 = "0";
	a7 = type[res];
	printf("%s%s\n%s%s\n", str6, a6, str7, a7);
}
/**
 * addr - print point address
 *@buffer: buffer
 * Return: No return.
 */
void addr(char *buffer)
{
	char *str8 = "  Entry point address:             ";
	int res;

	if (buffer[4] == 1)
	{
		printf("%s0x", str8);
		res = 27;
		while (res >= 24)
		{
		if (buffer[res] != 0)
			printf("%0x", buffer[res]);
		res--;
		}
		printf("\n");
	}
	else
	{
		printf("%s0x", str8);
		res = 31;
		while (res >= 24)
		{
		if (buffer[res] != 0)
			printf("%0x", buffer[res]);
		res--;
		}
		printf("\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *@ac: counter
 *@av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, leido, cerrado;
	char buf[32];

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
	header(buf);
	elf_data(buf);
	os(buf);
	abi_type(buf);
	addr(buf);

	cerrado = close(fd_from);
	if (cerrado == -1)
		return (98);
	return (0);
}
