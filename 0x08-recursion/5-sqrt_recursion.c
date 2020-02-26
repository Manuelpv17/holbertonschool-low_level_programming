#include "holberton.h"

int aux(long int, long int);

/**
 * _sqrt_recursion - he natural square root of a number.
 * @n: int n
 * Return: Natural square root n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (aux(n, n));
}

/**
 * aux - a
 * @n: a
 * @cont: a
 * Return: a
 */
int aux(long int n, long int cont)
{
	if (n == cont * cont)
		return (cont);
	else if (cont == 0)
		return (-1);
	else if (cont > 0)
		cont = aux(n, cont - 1);

	return (cont);
}

