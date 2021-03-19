#include "lists.h"

/**
 *free_list - free all malloc created in linked list
 *@head: head of the list
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *fr;

	while (head != NULL)
	{
		fr = head->next;
		free(head->str);
		free(head);
		head = fr;
	}
}
