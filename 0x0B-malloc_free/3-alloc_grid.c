#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: Width of array of integers (Columns)
 * @height: Height of array of integers (Rows)
 * Return: pointer to a newly allocated space
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		p[i] = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[j][i] = 0;
		}
	}

	return (p);
}
