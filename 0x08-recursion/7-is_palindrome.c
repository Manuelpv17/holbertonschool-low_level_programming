#include "holberton.h"

int _strlen_recursion(char *s);
int aux(int n, int cont, char *s);

/**
 * is_palindrome - if a string is a palindrome
 * @s: string
 * Return: returns 1 if palindrome
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	return (aux(n, 0, s));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (s[0] != '\0')
	{
		n = _strlen_recursion(&s[1]);
	} else
		return (0);

	return (n + 1);
}


/**
 * aux - a
 * @n: a
 * @cont: a
 * @s: a
 * Return: a
 */
int aux(int n, int cont, char *s)
{
	if (n / 2 == cont)
		return (1);
	else if (s[cont] == s[n - 1 - cont])
		cont = aux(n, cont + 1, s);
	else
		return (0);

	return (cont);
}

