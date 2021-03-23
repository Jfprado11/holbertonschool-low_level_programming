#include "lists.h"

/**
 *free_listint - free a linked list
 *@head: the head
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
