#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free linked list
 * @head: ptr to head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempHead;

	while (head)
	{
		tempHead = head;
		head = head->next;
		free(tempHead);
	}
}
