#include "holberton.h"

/**
 * _strncmp - Compares
 * @s1: pointer first string 
 * @s2: pointer second string
 * Return: 
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int n = 0;

	for (j = 0; s1[j] != '\0'; j++)
	{
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	
	if (j > i)
		n = 15;
	else if (j < i)
		n = -15;
	else
		n = 0;

	return (n);

}
