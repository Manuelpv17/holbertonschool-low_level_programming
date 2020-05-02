#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list
 * @index: index of list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	int idx = index, i;

	if (head == NULL || *head == NULL || dlistint_len(*head) < index)
		return (-1);

	aux = *head;
	for (i = 0; i < idx; i++)
		aux = aux->next;

	if (aux->prev != NULL)
		aux->prev->next = aux->next;
	else if (aux->next != NULL)
		*head = aux->next;
	else
		*head = NULL;
	if (aux->next != NULL)
		aux->next->prev = aux->prev;

	free(aux);
	return (1);
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
