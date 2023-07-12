#include "lists.h"

/**
 * get_nodeint_at_index - get node at index given
 * @head: ptr to head
 * @index: index of node to get
 * Return: address to the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	/* check for NULL head */
	if (!head)
		return (NULL);

	/* copy head to temp to maintain head reference and allow list traversal */
	temp = head;

	/* loop till end of list or index reached */
	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}

	/* if index found return pointer, else NULL */
	if (i == index)
		return (temp);
	else
		return (NULL);
}
