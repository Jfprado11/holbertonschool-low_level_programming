#include "hash_tables.h"

/**
 *hash_table_set - insert a value into a hash table
 *@ht: the hash table
 *@key: the key of hash table
 *@value: the value of the key will hold
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (strlen(key) == 0)
		return (0);
	if (ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
			return (1);
		}
	}
	return (1);
}
