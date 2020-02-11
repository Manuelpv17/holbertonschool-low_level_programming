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
		n = -1 * (n % 10);
		_putchar(n + '0');
		return (n);
	}
	_putchar(n % 10 + '0');
	return (n);
}
