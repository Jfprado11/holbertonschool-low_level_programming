#include "lists.h"

/**
 *sum_listint - sum all the data inside of the linked list
 *@head: the head of linked list
 *
 *Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
