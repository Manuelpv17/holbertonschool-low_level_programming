#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: value of element
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}
