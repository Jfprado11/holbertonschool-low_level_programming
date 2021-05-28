#include "hash_tables.h"

/**
 *key_index - gives the idex position where value would be stored
 *@key: the key of the array
 *@size: the size of the array
 *Return: the idex number where it stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num, idex;

	num = hash_djb2((unsigned char *)key);
	idex = num % size;
	return (idex);
}
