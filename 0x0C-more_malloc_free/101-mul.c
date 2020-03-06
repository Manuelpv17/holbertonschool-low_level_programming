#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


char *infinite_add(char *n1, char *n2, char *r, int size_r);
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
	int i, j;
	int len1;
	int len2;
	int  n;

	if (argc != 3)
	{
		puts("Error");
		exit (98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	p = malloc(sizeof(char *) * 3);
	
	if (p == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
	{
		p[i] = calloc(len2 + 1, sizeof(char));

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return ('\0');
		}
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (i == 1 && j == 0)
				p[i][j] = '0';
				
			else
			{
				n = (argv[1][len1 -1 -j] - '0') * (argv[2][len2 - i - 1] - '0');
				p[i][j] = n + '0';
			}
		}
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			_putchar(p[i][j]);
		}
		_putchar('\n');
	}

	
	for (j = 0; j < len1; j++)
		free(p[j]);
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



/**
 *  infinite_add - adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: Array return
 * @size_r: max size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, a, l, n;
	int c = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
	}
	for (k = 0; k < i || k < j; k++)
	{
		n = 0;
		if (i > k)
			n = n + n1[i - k - 1] - '0';
		if (j > k)
			n = n + n2[j - k - 1] - '0';
		n = n + c;
		c = 0;
		if (n > 9)
		{
			r[k] = ((n - 10) + '0');
			c = 1;
		} else
			r[k] = n + '0';
	}
	if (c == 1)
	{
		r[k] = '1';
		k++;
	}
	for (l = 0; l < k / 2; l++)
	{
		a = r[l];
		r[l] = r[k - l - 1];
		r[k - l - 1] = a;
	}
	r[k] = '\0';
	if (k >= size_r)
		return (0);
	return (r);
}

