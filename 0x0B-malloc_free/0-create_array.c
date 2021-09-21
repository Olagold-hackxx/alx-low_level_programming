#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array with memory stored with malloc
 * @size: no of index of array
 * @c: char in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		if (s == NULL)
			return (NULL);
		s[i] = c;
	}
	return (s);
}
