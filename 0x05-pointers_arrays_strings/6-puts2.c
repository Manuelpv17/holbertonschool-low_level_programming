#include "holberton.h"

/**
 * puts2 - Function
 * @str: Pointer
 *
 */
void puts2(char *str)
{
	int i = 1;
	int j = 0;

	for (i = 1; str[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
