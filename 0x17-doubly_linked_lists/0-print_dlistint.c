#include "lists.h"
#include <stdlib.h>

/**
  * print_dlistint - print doubly linked list
  * @h: pointer to head
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *current;
    current = h;
    size_t len = 0;
    while (current != NULL)
    {
       printf("%d\n", current->n);
       current = current->next;
       len++;
    }
    return len;
}
