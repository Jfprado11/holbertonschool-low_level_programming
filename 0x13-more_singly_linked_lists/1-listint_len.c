#include "lists.h"

/**
 *listint_len - return the number of elements
 *@h: the head of the lists
 *
 *Return: the numebers of elements of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
