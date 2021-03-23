#include "lists.h"

/**
 *pop_listint - deletes the first node
 *@head: the head of linked list
 *
 *Return: the data of the node
 */
int pop_listint(listint_t **head)
{
	int ptr;
	listint_t *del;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = (*head)->n;
	del = *head;
	del = (*head)->next;
	free(*head);
	*head = del;
	return (ptr);
}
