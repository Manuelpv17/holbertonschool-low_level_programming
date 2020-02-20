#include "holberton.h"

/**
 * cap_string- Capitalizes all words of a string.
 * @a: String
 * Return: a
 */

char *cap_string(char *a)
{
	int i, j;
	char b[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '}' };

	for (j = 0; a[j] != '\0'; j++)
	{
		for (i = 0; b[i]  != '\0'; i++)
		{
			if ((a[j - 1] == b[i]) && (a[j] >= 'a' && a[j] <= 'z'))
				a[j] -= 32;
		}
	}

	return (a);
}
