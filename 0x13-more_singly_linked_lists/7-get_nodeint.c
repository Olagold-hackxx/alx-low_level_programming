#include "lists.h"

/**
 * get_nodeint_at_index - get node at index given
 * @head: ptr to head
 * @index: index of node to get
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
