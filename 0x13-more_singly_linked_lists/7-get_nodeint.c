#include "lists.h"

/**
 *get_nodeint_at_index - get the idex of specific node
 *@head: the head of the linked list
 *@index: the specific node to be verified
 *Return: the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (i < index && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
