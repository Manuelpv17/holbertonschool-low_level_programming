#include <stdlib.h>

/**
 * malloc_checked - Check malloc with amouts of space
 * @b: amount of space to create
 * Return: Pointer to address of new space
 */

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
