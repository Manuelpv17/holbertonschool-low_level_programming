#include "holberton.h"
#include <elf.h>

/**
 * main - Read and print Elf file
 * @argc: number of arguments - 3 or error
 * @argv: array with arguments
 * first name of file to be copy
 * second name of the new file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr the_elf_file;
	int fdes, i;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Show me the file! Im not magic");
		exit(98);
	}

	fdes = open(argv[1], O_RDONLY);
	if (fdes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read(fdes, &the_elf_file, sizeof(Elf32_Ehdr));
	if (fdes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (the_elf_file.e_ident[0] == 0x7f &&
	    the_elf_file.e_ident[1] == 'E' &&
	    the_elf_file.e_ident[2] == 'L' &&
	    the_elf_file.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: Not valid ELF\n");
		exit(98);
	}
	printf("Magic: ");
	for (i = 0; i < 16; i++)
		printf("%02x ", the_elf_file.e_ident[i]);
	close(fdes);
	return (0);
}
