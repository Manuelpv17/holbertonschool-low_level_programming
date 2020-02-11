#include "holberton.h"

/**
  *print_last_digit - last digit
  *@n: First operand
  *Return: last digit
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n < 10 && n > -1)
	{
		_putchar(n + '0');
		return (n);
	} else if (n > -10 && n < 0)
	{
		_putchar(n + '0');
		return (n);
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
