#include "lists.h"

/**
 *dlistint_len - tell the len of doubly linke list
 *@h: the linked list
 *
 *Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	size_t count = 0;

	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
