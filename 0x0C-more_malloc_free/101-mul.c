#include <stdlib.h>
#include <stdio.h>


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts(char *str);
int _strlen(char *s);

/**
 * main - multiplies two positive numbers
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	char **p;
	int i;
	int n = 1;

	int len1 = _srtlen(argv[1]);
	int len2 = _srtlen(argv[2]);

	if (argc != 3)
	{
		puts("Error");
		exit (98);
	}

	p = malloc(sizeof(char *) * _strlen(argv[1]));
	
	if (p == NULL)
	{
		return (NULL);
	}

	for ()
	{
	}

	for (i = 0; i < _strlen)
	{
		p[i] = malloc(sizeof(char) * );
	}

	for (i = 1; i < argc; i++)
	{
		 = n * ( argv[i][0] - '0');
	}
	
	free(p);

	return (0);
}

/**
 * _strlen - Calculate length of string
 * @s: Pointer to string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);

}

/**
 * _puts - Print string
 * @str: Pointer to string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to previous memory block
 * @old_size: Size in bytes of previous memory block
 * @new_size: Size in bytes of new memory block
 * Return: Pointer to address of new space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	char *p_old = NULL;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		old_size = 0;
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	p_old = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = p_old[i];
	}
	free(ptr);

	return (p);
}

