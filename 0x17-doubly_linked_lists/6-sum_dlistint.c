#include "lists.h"

/**
 *sum_dlistint - sum all the data of a linked list
 *@head: the linked list
 *Return: the sum of data of a linked lists
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = head;

	if (head == NULL)
	{
		return (0);
	}
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
