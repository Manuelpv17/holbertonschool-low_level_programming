#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size <= 0)
		return (table);

	table = malloc(sizeof(hash_table_t) * 1);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	return (table);
}
