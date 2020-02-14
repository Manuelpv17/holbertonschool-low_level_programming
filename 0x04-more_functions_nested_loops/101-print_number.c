#include "holberton.h"

/**
 * print_number - Function
 * @n: Int
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
