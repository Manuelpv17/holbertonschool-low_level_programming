#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: Index of node
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
