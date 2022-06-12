#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: ptr to head
 * @index: index of the node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current != NULL && i == index - 1)
		{
			current = current->next;
			return (current);
		}
	return (NULL);
}
