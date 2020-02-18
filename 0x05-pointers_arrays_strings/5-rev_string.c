#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Function
 * @s: Pointer
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	char a;

	for (i = 1; s[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i / 2;  j++)
	{
		a = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = a;
	}
}
