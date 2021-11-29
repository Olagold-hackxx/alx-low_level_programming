#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head of the list
 * @head: ptr to the head of the list
 * Return: the head node's element n
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp =*head;
	*head = (*head)->next;

	return (temp->n);
}
