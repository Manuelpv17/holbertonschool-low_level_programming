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
	unsigned int i;

	if (h == NULL)
		return (NULL);

	aux_head = *h;
	for (i = 0; i < idx && aux_head->next != NULL; i++)
		aux_head = aux_head->next;
	if (aux_head->next == NULL && i < idx - 1)
		return (NULL);

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
		new_node->next = aux_head;
		new_node->prev = aux_head->prev;
		aux_head->prev->next = new_node;
		aux_head->prev = new_node;
	}
	return (new_node);
}
