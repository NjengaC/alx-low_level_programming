#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 64

/**
 * print_error - print error message to stderr and exit
 * @msg: error message to print
 */
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_header - print ELF header information
 * @header: pointer to ELF header structure
 */
void print_header(Elf64_Ehdr *header)
{
	char magic[BUFFER_SIZE] = {0};
	int i;
	if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Error: Not an ELF file");

	memcpy(magic, header->e_ident, SELFMAG);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < SELFMAG; i++)
		printf("%02x%c", magic[i], i < SELFMAG - 1 ? ' ' : '\n');
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - System V" : "UNIX - Other");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE: printf("NONE (Unknown type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown: %x>\n", header->e_type); break;
	}
	printf("  Entry point address:               %lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error(strerror(errno));

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Unable to read ELF header");

	print_header(&header);

	close(fd);
	return (0);
}
