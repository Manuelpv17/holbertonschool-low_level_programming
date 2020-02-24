#include "holberton.h"

/**
 * _strchr - Search character in a string
 * @s: Pointer to string
 * @c: Character to search
 * Return: Pointer s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
