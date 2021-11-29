#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: ptr to ptr to head of list
 * @n: element of the list
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempHead;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tempHead = *head;
	while (tempHead->next != NULL)
		tempHead = tempHead->next;
	tempHead->next = new;
	return (tempHead->next);
}

