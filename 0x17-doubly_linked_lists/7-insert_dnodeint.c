#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node in linked list at specific position
 *@h: the linked list
 *@idx: the index where the new node will be put it
 *@n: the data of the new node
 *Return: the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *new = NULL;
	unsigned int count = 0, i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	aux = *h;
	if (idx == 0)
	{
		return (add_dnodeint(&*h, n));
	}
	if (idx <= count)
	{
		while (i < idx && aux->next != NULL)
		{
			aux = aux->next;
			i++;
		}
		if (aux->next == NULL)
		{
			return (add_dnodeint_end(&*h, n));
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux;
		new->prev = aux->prev;
		aux->prev = new;
		aux = aux->prev->prev;
		aux->next = new;
		return (new);
	}
	return (NULL);
}
