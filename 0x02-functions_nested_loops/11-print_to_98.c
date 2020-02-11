#include "holberton.h"

void print_to_98(int n)
{
	int i;
	int n1;

	for (i = n; i < 99; i++)
	{
		if (i < 10 && i > -1)
		{
			_putchar(i + '0');
		}else if (i > 9)
		{	_putchar(i/10 + '0');
			_putchar(i%10 + '0');
		}else if ( i < 0 && i < 10)
		{
			n1 = -i;
			_putchar('-');
			_putchar(n1 + '0');
		}else if (i > -99 && i < -9) 
		{
			n1 = -i;
			_putchar('-');
			_putchar(n1/10 + '0');
			_putchar(n1%10 + '0');
		}

		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return;
}
