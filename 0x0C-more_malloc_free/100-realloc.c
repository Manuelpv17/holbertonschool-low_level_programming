#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to previous memory block
 * @old_size: Size in bytes of previous memory block
 * @new_size: Size in bytes of new memory block
 * Return: Pointer to address of new space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	char *p_old = NULL;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		old_size = 0;
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	p_old = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = p_old[i];
	}
	free(ptr);

	return (p);
}
