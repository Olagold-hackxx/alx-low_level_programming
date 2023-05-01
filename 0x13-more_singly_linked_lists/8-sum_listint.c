#include "lists.h"

/**
 * sum_listint -sum all the data (n) of a listint_t linked list
 * @head: ptr to head of list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	/* if list NULL/empty return 0 */
	if (!head)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
