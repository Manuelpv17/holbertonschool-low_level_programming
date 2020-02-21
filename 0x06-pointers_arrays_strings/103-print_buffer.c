#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Print Buffer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i, j, k;
	int a = 0;

	for (i = 0; i < size / 10; i = i + 1)
	{
		printf("%08x: ", i);
		for (j = a; j < a + 10; j = j + 2)
		{
			printf("%x%x ", b[j], b[j + 2]);
		}
		for (k = a; k < a + 10; k++)
		{
			if (b[k] > 32)
				printf("%c", b[k]);
			else
				printf(".");
		}
		a = a + 10;
		printf("\n");
	}
}
