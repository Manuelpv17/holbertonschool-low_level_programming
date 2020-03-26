#include "holberton.h"

int _isdigit(int c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i, j, k, aux;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (_isdigit(b[i]) != 1)
			return (0);
	}
	i = i - 1;

	n += (b[i] - '0');
	for (k = 0; b[k + 1] != '\0'; k++, i--)
	{
		aux = 1;
		for (j = 0; j < i; j++)
			aux = (b[k] - '0') * aux * 2;
		n += aux;
	}

	return (n);
}

/**
 * _isdigit - Check if digit is a number
 * @c: digit to check
 * Return: 1 if number, 0 if else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
