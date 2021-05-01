#include "lists.h"

/**
 *free_dlistint - free a doubly lists
 *@head: free a lists
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
