#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - get length of list
 * @h: ptr to head
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
