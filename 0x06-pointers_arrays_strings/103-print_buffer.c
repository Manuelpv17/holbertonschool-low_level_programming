#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Print Buffer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i = i + 1)
	{
		printf("%p ", &b[i]);
		printf("%x%x ", b[i], b[i + 1]);
		printf("%c\n", b[i]);

	}
	printf("\n");
}
