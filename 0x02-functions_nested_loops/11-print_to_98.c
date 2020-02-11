#include "holberton.h"
/**
* print_to_98 - print
* @n: int
*/
void print_to_98(int n)
{
	int i;
	int n1;

	for (i = n;;)
	{
		if (i >= 0 && i <= 9)
		{
			_putchar(i + '0');
		} else if (i >=  10 && i <= 99)
		{	_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		} else if (i >= -9 && i <= -1)
		{
			n1 = -i;
			_putchar('-');
			_putchar(n1 + '0');
		} else if (i >= -99 && i <= -10)
		{
			n1 = -i;
			_putchar('-');
			_putchar(n1 / 10 + '0');
			_putchar(n1 % 10 + '0');
		} else if (i >= 100 && i <= 999)
		{
			_putchar(i / 100 + '0');
			_putchar((i % 100) / 10 + '0');
			_putchar((i % 100) % 10 + '0');
		}
		if (i == 98)
			break;
		_putchar(',');
		_putchar(' ');
		if (i > 97)
			i--;
		else if (i < 99)
			i++;
	}
	_putchar('\n');
}
