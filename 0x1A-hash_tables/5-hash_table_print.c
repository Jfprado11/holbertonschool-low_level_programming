#include "hash_tables.h"

/**
 *hash_table_print - print a hash table
 * @ht: the hash table
 *
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, entry = 0;
	hash_node_t *key_current;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		key_current = ht->array[i];
		while (key_current)
		{
			if (entry != 0)
				printf(", ");
			printf("'%s': '%s'", key_current->key, key_current->value);
			key_current = key_current->next;
			entry = 1;
		}
	}
	printf("}");
	printf("\n");
}
