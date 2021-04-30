#include "lists.h"

/**
 *print_dlistint - print the data inside of doubly linke list
 *@h: the linked list
 *
 *Return: the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	size_t count = 0;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		count++;
	}
	return (count);
}
