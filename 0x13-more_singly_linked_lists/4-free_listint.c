#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	unsigned int i;
	listint_t *aux_head = NULL;

	for (i = 0; head != NULL; i++)
	{
		aux_head = head;
		head = head->next;
		free(aux_head);
	}
}
