#include "lists.h"

/**
 * print_listint - print the data inside the nodes
 *@h: the head of the list
 *
 *Return: the number of the nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *aux = NULL;
	size_t count = 0;

	aux = h;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		count++;
	}
	return (count);
}
