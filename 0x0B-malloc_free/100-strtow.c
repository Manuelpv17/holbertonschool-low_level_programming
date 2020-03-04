#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: Array
 * Return: pointer to pointers of strings
 */
char **strtow(char *str)
{	char **p = NULL;
	int i, k, c, a, c2, c3;

	c = c2 = c3 = a = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			c++;
	}
	p = malloc(sizeof(char *) * c + 1);
	if (p == NULL || c == 0)
		return (NULL);
	for (i = 0; str[i] != '\0' || c3 < c; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			c2++;
			a = 1;
		}
		else if (a == 1 && (str[i] == ' ' || str[i] == '\0'))
		{
			p[c3] = malloc(sizeof(char) * c2 + 1);
				if (p[c3] == NULL)
				{
					for (k = 0; k < c3; k++)
						free(p[k]);
					free(p);
					return (NULL);
				}

			for (k = 0; k < c2; k++)
			{
				p[c3][k] = str[i - c2 + k];
			} p[c3][k] = '\0';
			c3++;
			a = c2 = 0;
		}
	}	return (p);
}
