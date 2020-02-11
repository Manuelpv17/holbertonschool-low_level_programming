#include "holberton.h"

void times_table(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if (i*j < 10)
			{
				_putchar(' ');
				_putchar(i*j + '0');
			}
			else
			{
				_putchar((i*j)/10 + '0');
				_putchar((i*j)%10 + '0');
			}
			
			if ( j == 9 )
				break;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

	return;
}
