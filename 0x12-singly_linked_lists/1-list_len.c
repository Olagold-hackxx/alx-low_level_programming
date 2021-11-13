#include "lists.h"

/**
 * list_len - print number of elements in linked list
 * @h: singly linked list
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
