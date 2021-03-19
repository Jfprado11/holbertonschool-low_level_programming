#include "lists.h"
#include <string.h>

int _strlen(const char *s);
/**
 *add_node_end - adds a node at teh end of list
 *@head: the head of the list
 *@str: string to be duplicated
 *
 *Return: the addres of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fi_node = NULL;
	list_t *last = NULL;

	fi_node = malloc(sizeof(list_t));
	if (fi_node == NULL)
	{
		return (NULL);
	}


	fi_node->str = strdup(str);
	fi_node->len = _strlen(str);
	fi_node->next = NULL;

	if (*head == NULL)
	{
		*head = fi_node;
		return (*head);
	}
	else
	{
		last = *head;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = fi_node;
	return (*head);
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
