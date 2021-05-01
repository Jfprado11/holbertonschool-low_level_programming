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
	dlistint_t *aux = NULL, *new = NULL;
	unsigned int count = 0, i = 0;

	if (h == NULL)
		return (NULL);

	aux = *h;
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
		while (i < idx - 1 && aux->next != NULL)
		{
			aux = aux->next;
			i++;
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux->next;
		new->prev = aux;
		aux->prev = new;
		aux = aux->prev->prev;
		aux->next = new;
		return (new);
	}
	return (NULL);
}
