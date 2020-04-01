#include "holberton.h"

void read_write(int file_from, int file_to, char *name_from, char *name_to);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments - 3 or error
 * @argv: array with arguments
 * first name of file to be copy
 * second name of the new file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, check;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	read_write(file_from, file_to, argv[1], argv[2]);

	check = close(file_from);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	check = close(file_to);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * read_write - aux function. Reads the From file and write in the To file
 * @file_from: File descriptor for From file
 * @file_to: File descriptor for To file
 * @name_from: String with name of From file
 * @name_to: String with name of To file
 */
void read_write(int file_from, int file_to, char *name_from, char *name_to)
{
	int num = 1024, check;
	char buffer[1024];

	while (num == 1024)
	{
		num = read(file_from, buffer, 1024);
		if (num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name_from);
			exit(98);
		}

		check = write(file_to, buffer, num);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_to);
			exit(99);
		}
	}
}
