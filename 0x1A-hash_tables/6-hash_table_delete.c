#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to look into
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_head = NULL;
	hash_node_t *aux = NULL;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		aux_head = ht->array[index];
		while (aux_head != NULL)
		{
			aux = aux_head;
			aux_head = aux_head->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
