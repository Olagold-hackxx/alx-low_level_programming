#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list and set head to NULL
 * @head: ptr to ptr to head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempHead;

	while (*head)
	{
		tempHead = *head;
		*head = (*head)->next;
		free(tempHead);
	}
	head = NULL;
}

