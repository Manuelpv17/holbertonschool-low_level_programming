#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fdes, i, check;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
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
