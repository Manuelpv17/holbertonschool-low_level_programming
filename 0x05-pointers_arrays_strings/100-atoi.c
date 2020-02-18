#include "holberton.h"
/**
 * _atoi - Function
 * @s: Pointer
 * Return: Int
 */
int _atoi(char *s)
{
	int i;
	int n = 0;
	int nc = 1;
	int p = 0;
	int y = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (p == 0 && s[i] == '-')
		{
			y = -1 * y;
		} else if ((s[i] <= '9' && s[i] >= '0') && (p == 0 || p == 1))
		{
			n = n * nc + (s[i] - '0');
			nc =  10;
			p = 1;
		} else if (p == 1)
		{
			break;
		}
	}
	return (n * y);
}
