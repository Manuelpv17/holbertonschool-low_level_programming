#include "holberton.h"

/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
	int i;
	char h[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
