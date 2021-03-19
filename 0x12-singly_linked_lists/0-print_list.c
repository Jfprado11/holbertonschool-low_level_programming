#include "lists.h"

/**
 *print_list - print all the lements of a linked list.
 *@h: the head of the list
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr = NULL;
	const list_t *n = NULL;

	n = h;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	while (n != NULL)
	{
		count++;
		n = n->next;
	}
	return (count);
}
