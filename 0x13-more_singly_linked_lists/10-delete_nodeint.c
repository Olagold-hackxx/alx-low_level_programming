#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: ptr to ptr to head
 * @index: given index of node to be delete 
 * Return: 1 at success , -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempHead;

	tempHead = *head;
	if (!*head)
		return (-1);
	for (i = 1; i < index; i++)
	{
		if (tempHead->next != NULL)
			tempHead = tempHead->next;
	}
	if (index > 1)
		tempHead->next = tempHead->next->next;
	if (index == 0)
		*head = (*head)->next;
	if (index == 1)
		(*head)->next = (*head)->next->next;
	return (1);
}
