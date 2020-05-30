#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to look into
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned long int index;
	int coma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		aux = ht->array[index];
		while (aux != NULL)
		{
			if (coma == 0)
				coma = 1;
			else
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
	}
	printf("}\n");
}
