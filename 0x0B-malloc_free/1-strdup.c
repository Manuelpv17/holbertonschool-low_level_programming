#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string in new space
 * @str: String to copy
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	int i, j;
	char *p = NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	p = malloc(sizeof(char) * i);

	if (p == NULL || str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}

	return (p);
}