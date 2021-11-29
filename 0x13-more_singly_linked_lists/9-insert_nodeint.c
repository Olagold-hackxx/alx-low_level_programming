#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: ptr to ptr to head of list
 * @idx: index
 * @n: element of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	temp = *head;
	for (i = 1; i < idx; i++)
	{
		if (temp->next != NULL)
			temp = temp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	
	return (new);
}
