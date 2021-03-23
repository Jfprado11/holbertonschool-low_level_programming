#include "lists.h"

/**
 *get_nodeint_at_index - get the idex of specific node
 *@head: the head of the linked list
 *@index: the specific node to be verified
 *Return: the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0, count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	ptr = head;
	if (index <= count)
	{
		while (i < index && ptr->next != NULL)
		{
		ptr = ptr->next;
		i++;
		}
		return (ptr);
	}
	return (NULL);
}
