#include "holberton.h"

/**
 * _puts_recursion - Print a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	if (s[i] != '\0')
		_puts_recursion(&s[i + 1]);
	else
		_putchar('\n');

}

