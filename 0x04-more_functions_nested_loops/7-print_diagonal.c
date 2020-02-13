#include "holberton.h"

/**
 * print_diagonal - Function
 * @n: Int
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(32);
			if (i == j)
			{
				_putchar(92);
			}
		}
	}
	_putchar(10);
}
