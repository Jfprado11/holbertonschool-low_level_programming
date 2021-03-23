#include "lists.h"

/**
 *add_nodeint - add a node at the begging of the linked list
 *@head: the head of the list
 *@n: the data to be inputed
 *
 *Return: the address of the pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
