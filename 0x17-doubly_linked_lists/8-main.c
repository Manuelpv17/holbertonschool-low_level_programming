#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void pback(dlistint_t *head);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 5);
	add_dnodeint_end(&head, 6);
	add_dnodeint_end(&head, 7);
	print_dlistint(head);
	printf("REVES\n");
	pback(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 4);
	print_dlistint(head);
	printf("REVES\n");
	pback(head);

	return (0);
}

void pback(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}
