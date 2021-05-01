#include "lists.h"


/**
 *delete_dnodeint_at_index - delete a node in certain position
 *@head: the linked list
 *@index: the position to be deleted
 *Return: 1 as success -1 as errors
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *tmp;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	aux = *head;
	while (index > 0)
	{
		aux = aux->next;
		index--;
	}
	if (aux->next == NULL)
	{
		tmp = aux->prev;
		tmp->next = NULL;
		free(aux);
		aux = NULL;
		return (1);
	}
	else
	{
		tmp = aux->prev;
		tmp->next = aux->next;
		aux->next->prev = tmp;
		free(aux);
		aux = NULL;
		return (1);
	}
return (-1);
}
