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
	int n_store;

	/* check for empty list */
	if (!(*head))
		return (0);

	/* copy head pointer in temp for deletion */
	temp = *head;

	/* store n value for return after deletion */
	n_store = (*head)->n;

	/* point head to new head node */
	*head = (*head)->next;

	/* free "deleted" node */
	free(temp);

	/* return the valued stored in deleted node */
	return (n_store);
}
