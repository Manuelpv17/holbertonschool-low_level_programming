#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: header of list
 * @idx: index of new node
 * @n: Value of new node
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux_head = NULL;
	int i, index = idx;

	if (h == NULL || dlistint_len(*h) < idx)
		return (NULL);

	aux_head = *h;
	for (i = 0; i < index - 1; i++)
		aux_head = aux_head->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
		*h = new_node;
	else if (aux_head->next == NULL)
	{
		new_node->prev = aux_head;
		aux_head->next = new_node;
	}
	else if (idx == 0)
	{
		new_node->next = aux_head;
		*h = new_node;
		aux_head->prev = new_node;
	}
	else
	{
		new_node->next = aux_head->next;
		new_node->prev = aux_head;
		aux_head->next->prev = new_node;
		aux_head->next = new_node;
	}
	return (new_node);
}

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
