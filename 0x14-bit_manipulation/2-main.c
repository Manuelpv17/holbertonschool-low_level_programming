#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(5, 2);
	printf("%d\n", n);
	n = get_bit(5, 1);
	printf("%d\n", n);
	n = get_bit(5, 0);
	printf("%d\n", n);
	return (0);
}