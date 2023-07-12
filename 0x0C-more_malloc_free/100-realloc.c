#include "main.h"
#include "stdlib.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size of prev alloc memory
 * @new_size: size of newly alloc memory
 * Return: void pointer to newly alloc memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *pptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == 0)
		return (NULL);
	pptr = ptr;

	while (i < old_size)
	{
		str[i] = pptr[i];
		i++;
	}

	free(ptr);
	return (str);
}
