#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a newly allocated space
 * @s1: String 1 to concatenate
 * @s2: String 2 to concatenate
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *p = NULL;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
	}

	p = malloc(sizeof(char) * (i + k));

	if (p == NULL)
	{
		return (p);
	}

	for (j = 0; j < (i + k); j++)
	{
		if (j < i)
			p[j] = s1[j];
		else
			p[j] = s2[j - i];
	}

	return (p);
}
