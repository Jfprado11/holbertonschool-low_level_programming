#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node in specifi posiiton
 *@head: the head of the list
 *@idx: index of the linked list
 *@n: the data to be intoruced
 *Return: the addres of the pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *ptr = *head;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (idx <= count)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		ptr = *head;
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
		}
		else
		{
			count = 0;
			while (count < idx - 1)
			{
				ptr = ptr->next;
				count++;
			}
			node->next = ptr->next;
			ptr->next = node;
		}
		return (node);
	}
	return (NULL);
}
