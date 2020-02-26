#include "holberton.h"

/**
 * factorial - Return factorial of n
 * @n: Number int
 * Return: factorial
 */

int factorial(int n)
{
	int n1;

	if (n < 0)
		return (-1);

	n1 = n;
	if (n > 0)
		n = factorial(n - 1);
	else
		return (1);

	return (n * n1);
}

