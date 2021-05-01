#include "lists.h"

/**
 *add_dnodeint_end - adds a node at the end of lists
 *@head: the linked lists
 *@n: the data to be inserted
 *Return: the addres of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
