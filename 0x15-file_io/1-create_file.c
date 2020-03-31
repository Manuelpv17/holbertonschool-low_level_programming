#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fdes, check, i;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdes < -1)
		return (-1);

	for (i = 0; text_content != NULL && text_content[i] != '\0'; i++)
	{
	}

	check = write(fdes, text_content, i);
	if (check == -1)
		return (-1);

	close(fdes);
	return (1);
}
