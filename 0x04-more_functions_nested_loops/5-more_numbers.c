#include "holberton.h"

/**
 * more_numbers - Function
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
