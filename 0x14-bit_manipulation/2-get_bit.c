#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: The index
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j, n_aux = n;

	for (i = 0; n_aux != 0; i++)
		n_aux = n_aux >> 1;

	if (index > i - 1)
		return (0);

	for (j = 0; j < index; j++)
		n = n >> 1;

	return (n & 1);
}
