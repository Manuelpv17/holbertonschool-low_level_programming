#include "holberton.h"

/**
 * _strncpy - Copy
 * @dest: pointer first string
 * @src: pointer - copy
 * @n: n bytes of src
 * Return: Copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] != '\0') && (i < n); i++)
	{
		dest[i] = src[i];
	}

	if (src[i]  == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);

}
