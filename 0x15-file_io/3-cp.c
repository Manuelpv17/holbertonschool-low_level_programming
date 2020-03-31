#include "holberton.h"

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
	ssize_t file_to, file_from, check, num = 1;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	while (num != 0)
	{
		num = read(file_from, buffer, 1024);
		write(file_to, buffer, num);
	}
	check = close(file_from);
	if (check == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", file_from);
		exit(100);
	}
	check = close(file_to);
	if (check == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}