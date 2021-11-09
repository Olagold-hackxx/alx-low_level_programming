#include "list.h"

/**
 * free_list - free space allocated in heap
 * @head: ptr to the space on heap
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *heap;

	while (head != NULL)
	{
		heap = head;
		head = head->next;
		free(heap->str);
		free(heap);
	}

}
