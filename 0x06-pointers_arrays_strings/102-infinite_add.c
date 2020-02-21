#include "holberton.h"

/**
 * infinite_add - adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: Array return
 * size_r
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, i1, j, k, a, l, n;
	int c = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
	}

	if (i < j)
		i1 = i;
	else
		i1 = j;

	for (k = 0; k < i1; k++)
	{
		n = (n1[i - k - 1] - '0') + (n2[i - k - 1] - '0');
		if (n >= 10)
		{
			r[k] = (n - 10 + c) + '0';
			c = 1;	 
		} else 
		{
			r[k] = (n + c) + '0';
			c = 0;
		}
	}
	if (c == 1)
	{
		r[k] = '1' ;
		k++;
	}

	for (l = 0; l < k / 2; l++)
	{
		a = r[l];
		r[l] = r[k - l - 1];
		r[k - l - 1] = a;
	}

	r[k] = '\0';


	return (r);
}
