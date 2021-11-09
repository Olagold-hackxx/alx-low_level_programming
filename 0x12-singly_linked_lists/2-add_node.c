#include "list.h"

/**
 * add_node - add node at beginning
 * @head: ptr to node
 * @str: string to print
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (*head);

}
