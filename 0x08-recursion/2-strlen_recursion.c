#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int n;

	if (s[i] != '\0')
	{
		n = _strlen_recursion(&s[i + 1]);
	} else
		return (0);

	return (n + 1);
}

