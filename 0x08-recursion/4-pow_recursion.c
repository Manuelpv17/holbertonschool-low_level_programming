#include "holberton.h"

/**
 * _pow_recursion - X raised to the power of Y
 * @x: int to be raised
 * @y: int power
 * Return: Resulto of raised x to y
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < -1)
		return (-1);

	if (y > 0)
		n = _pow_recursion(x, y - 1);
	else
		return (1);

	return (n * x);
}
