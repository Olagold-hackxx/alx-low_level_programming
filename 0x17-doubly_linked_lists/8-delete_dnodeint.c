#include "lists.h"

/**
 * delete_dnodeint_at_index - del node in doubly linked list node
 * @head: ptr to ptr to head
 * @index: index for node to be del
 * Return: 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	for (i = 0; i < index; i++)
		current = current->next;
	if (current != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		return (1);
	}
	return (-1);
}
