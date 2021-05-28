#include "hash_tables.h"

/**
 *hash_table_get - obtain the value of a key
 *@ht: thr hash table
 *@key: the key to the value
 *
 *Return: the value of char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
