#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - insert node at an index
 * @h: ptr to ptr to head
 * @idx: index to insert node
 * @n: int to insert at node
 * Return: adress of new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	current = *head;
	temp = *head;
	i = 0;
	while (current)
	{
		if (i != index)
			current = current->next;
		else
		{
			if (current->prev)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
				return (1);
			}
			else
			{
				current = current->next;
				current->prev = NULL;
				free(temp);
				return (1);
			}
		}
		i++;
	}
	return (-1);
}
