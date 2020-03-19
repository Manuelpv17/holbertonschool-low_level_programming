#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head element
 * @str: pointer to string
 * Return: the addres of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p = NULL;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);
	p->next = *head;
	p->len = strlen(str);
	*head = p;

	return (*head);
}
