#include "hash_tables.h"

/**
 *hash_table_delete - deteing a hash table
 *@ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *tmp;
	unsigned long int i;

	if (!ht)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
		free(current);
	}
	free(ht->array);
	free(ht);
}
