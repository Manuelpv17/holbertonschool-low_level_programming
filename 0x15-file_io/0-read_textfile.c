#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdescrip, cont;
	char *p = NULL;

	if (filename == NULL)
		return (0);

	fdescrip = open(filename, O_RDONLY);
	if (fdescrip == -1)
		return (0);

	p = malloc(sizeof(char) * (letters));
	if (p == NULL)
		return (0);

	cont = read(fdescrip, p, letters);
	if (cont == -1)
		return (0);

	write(1, p, cont);

	close(fdescrip);
	free(p);
	return (cont);
}
