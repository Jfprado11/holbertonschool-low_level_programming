#include "lists.h"

/**
 *list_len - number of lenght of linked list
 *@h: head of linked list
 *
 *Return: the number of lenght
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}
