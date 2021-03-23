#include "lists.h"

/**
 * 
 * 
 * 
 * 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = node;
	return (ptr);
}
