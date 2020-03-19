#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head element
 * @str: pointer to string
 * Return: the addres of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux = NULL;

	aux = *head;

	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);

	(*head)->str = strdup(str);
	(*head)->next = aux;
	(*head)->len = strlen(str);

	return (*head);
}
