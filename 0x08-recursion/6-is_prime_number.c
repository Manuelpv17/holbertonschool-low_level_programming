#include "holberton.h"

int aux(int, int);

/**
 * is_prime_number - is a prime number?
 * @n: int n
 * Return: returns 1 if  prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aux(n, 2));
}

/**
 * aux - a
 * @n: a
 * @cont: a
 * Return: a
 */
int aux(int n, int cont)
{
	if (n % cont == 0)
		return (0);
	else if (cont == (n / 2) + 1)
		return (1);

	cont = aux(n, cont + 1);

	return (cont);
}

