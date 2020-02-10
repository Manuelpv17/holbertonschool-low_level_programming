#include "holberton.h"

int _islower(int c)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alp[i] == c)
		{
		return(1);
		}
	}
	return (0);
}
