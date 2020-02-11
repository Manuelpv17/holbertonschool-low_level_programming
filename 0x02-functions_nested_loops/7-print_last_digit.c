#include "holberton.h"

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n < 10 && n > 0)
	{
		_putchar(n + '0');
		return (n);
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
