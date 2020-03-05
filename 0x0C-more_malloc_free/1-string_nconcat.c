#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1 to be concatenate
 * @s2: String 2 to be concatenate
 * @n: n first bytes of s2. If n> len(s2) n = len(s2)
 * Return: Pointer to address of new space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1 + n; i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	}

	p[i] = '\0';

	return (p);
}

/**
 * _strlen - Calculate length of string
 * @s: Pointer to string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);

}

