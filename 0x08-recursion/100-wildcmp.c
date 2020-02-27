#include "holberton.h"

int _strlen_recursion(char *s);
int aux(int l1, int l2, char *s1, char *s2);
/**
 * wildcmp - compares two strings
 * @s1: string compare 1
 * @s2: string compare 2
 * Return: 1 if identical, 0 if no.
 */
int wildcmp(char *s1, char *s2)
{
	int c;

	if (s1[0] == '\0' && s1[0] == s2[0])
		return (1);

	else if (s1[0] == s2[0])
		c = wildcmp(&s1[1], &s2[1]);

	else if (s2[0] == '*' && s2[1] == '*')
		c = wildcmp(&s1[0], &s2[1]);

	else if (s2[0] == '*' && s1[0] != s2[1])
		c = wildcmp(&s1[1], &s2[0]);

	else if (s2[0] == '*' && s1[5] == s2[1])
		c = wildcmp(&s1[5], &s2[1]);

	else if (s2[0] == '*' && s1[3] == s2[1])
		c = wildcmp(&s1[3], &s2[1]);

	else if (s2[0] == '*' && s1[2] == s2[1])
		c = wildcmp(&s1[2], &s2[1]);

	else if (s2[0] == '*' && s1[1] == s2[1])
		c = wildcmp(&s1[1], &s2[1]);

	else if (s2[0] == '*' && s1[0] == s2[1])
		c = wildcmp(&s1[0], &s2[1]);
	else
		return (0);

	return (c);
}
