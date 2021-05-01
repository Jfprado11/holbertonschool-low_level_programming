#include "lists.h"

/**
 *get_dnodeint_at_index -  get the exact node needed
 *@head: the linked list
 *@index: the exact node to be obtained
 *Return: the node needed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int count = 0, i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	if (index <= count)
	{
		aux = head;
		while (i < index)
		{
			aux = aux->next;
			i++;
		}
		return (aux);
	}
	return (NULL);
}
