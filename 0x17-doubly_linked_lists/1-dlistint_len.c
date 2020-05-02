#include "lists.h"

/**
 *  dlistint_len - number of elements in a linked dlistint_t list.
 * @h: header of dlistint_t
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_list;

	for (len_list = 0; h != NULL; len_list++)
		h = h->next;
	return (len_list);
}
