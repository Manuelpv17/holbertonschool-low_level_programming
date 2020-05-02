#include "lists.h"

/**
 *  prints all the elements of a dlistint_t list
 * @h: header of dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len_list;

	for (len_list = 0; h != NULL; len_list++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len_list);
}