#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value
 * @key: the key. key can not be an empty string
 * @value: value is the value associated with the key
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return (0);

	if (key == NULL || value == NULL)
		return (0);

	if (key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}

	add_nodeint(&ht->array[index], key, value);

	return (1);
}

/**
 * add_nodeint - adds a new node at the beginning of a hash_node_t list
 * @head: pointer to the head of list
 * @key: the key
 * @value: value to be add
 * Return: New head position
 */
hash_node_t *add_nodeint(hash_node_t **head,
						 const char *key, const char *value)
{
	hash_node_t *p_new_element = NULL;

	p_new_element = malloc(sizeof(hash_node_t));
	if (p_new_element == NULL)
		return (NULL);

	p_new_element->next = *head;
	p_new_element->key = strdup(key);
	p_new_element->value = strdup(value);

	*head = p_new_element;

	return (*head);
}
