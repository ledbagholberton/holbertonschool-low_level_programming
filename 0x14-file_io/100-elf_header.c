

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *str1 = "Magic:  ";
	char *str2 = "Class:                             ";
	char *str3 = "Data:                              ";
	char *str4 = "Version:                           ";
	char *str5 = "OS/ABI:                            ";
	char *str6 = "ABI Version:                       ";
	char *str7 = "Type:                              ";
	char *str8 = "Entry point address:               ";
	char *elf1 = "ELF32";
	char *elf2 = "ELF64";
	char *data1 = "2's complement, little endian";
	char *data2 = "2's complement, big endian";
	char *version = "1 (current)";
	char *OS1 = "System V";
	char *OS2 = "HP-UX";
	char *OS3 = "NetBSD";
	char *OS4 = "Linux";
        char *OS5 = "AIX";
        char *OS6 = "IRIX";
	char *OS7 = "FreeBSD";
        char *OS8 = "Tru64";
        char *OS9 = "Novell Modesto";
	char *OSa = "OpenBSD";
        char *OSb = "OpenVMS";
        char *OSc = "NonStop Kernel";
        char *OSd = "AROS";
        char *OSe = "Fenix OS";
        char *OSf = "CloudABI";
	char *ABI = "0";
	char *type = "EXEC (Executable File)";
	char *a1, *a2, *a3, *a4, *a5, *a6; 
	int res, fd_from, fd_to, leido, escrito, cerrado;
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

	printf("%s", str1);
	for (res = 0; res <= 15; res++)
		printf("%x ",buf[res]);
	printf("\n");

	a1 = (buf[5] == 1) ? elf1 : elf2;
	a2 = (buf[6] == 0) ? data1 : data2;

	printf("%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",str2 ,a1, str3, a2, str4, a3, str5, a4, str6, a5, str7, a6); 


	cerrado = close(fd_from);
	if (cerrado == -1)
		return (-1 * fd_from);
	return (0);
}
