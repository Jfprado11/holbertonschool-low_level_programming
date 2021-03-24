#include "lists.h"

/**
 *delete_nodeint_at_index - delete a node at certain point
 *@head: the head of the lists
 *@index: the idex of the node
 *Return: 1 in success. -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previo = *head;
	listint_t *ptr = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previo = ptr;
			ptr = ptr->next;
			index--;
		}
		if (ptr == NULL)
		{
			return (-1);
		}
		previo->next = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
}
