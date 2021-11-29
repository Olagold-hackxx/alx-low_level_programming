#include "lists.h"

/**
 * listint_len - gets no of elements in linked list
 * @h: head of linked list
 * Return: No of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
