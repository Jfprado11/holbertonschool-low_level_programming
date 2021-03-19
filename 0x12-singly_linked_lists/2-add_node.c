#include "lists.h"
#include <string.h>

int _strlen(const char *s);
/**
 *add_node - adds a node at begging of the list
 *@head: the head of list
 *@str: string to be duplicated
 *
 *Return: the addreos the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beg_node = NULL;

	beg_node = malloc(sizeof(list_t));
	if (beg_node == NULL)
	{
		return (NULL);
	}
	beg_node->str = strdup(str);
	beg_node->len = _strlen(str);
	beg_node->next = (*head);
	(*head) = beg_node;
	return (beg_node);
}

/**
 *_strlen - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
int _strlen(const char *s)
{
	int lon = 0;

	while (*s != 0)
	{
		s++;
		lon++;
	}
	return (lon);
}
