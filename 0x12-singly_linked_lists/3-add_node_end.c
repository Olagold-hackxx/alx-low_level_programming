#include "lists.h"

/**
 * add_node_end - add node to end
 * @head: ptr to node
 * @str: new element
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = temp;
	return (*head);
}
