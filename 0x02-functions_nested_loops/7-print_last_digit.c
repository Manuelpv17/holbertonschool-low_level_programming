#include "holberton.h"

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n%10;
	_putchar(n + '0');
	return(n);
}
