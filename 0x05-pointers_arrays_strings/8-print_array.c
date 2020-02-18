#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function
 * @a: Pointer
 * @n: Int
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n - 1; j++)
	{
		printf("%d, ", a[j]);
	}
	printf("%d\n", a[n - 1]);
}
