#include "main.h"
#include "stdlib.h"

/**
 * _realloc: reallocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size of prev alloc memory
 * @new_size: size of newly alloc memory
 * Return: void pointer to newly alloc memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, *alloc;

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
		alloc[i] = 0;
	alloc = malloc(new_size);
	ptr = alloc;
	return (ptr);
}
