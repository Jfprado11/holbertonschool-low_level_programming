#include "lists.h"

/**
 *free_listint2 - free a linked list
 *@head: the head
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		aux = ptr->next;
		free(ptr);
		ptr = aux;
	}
}
