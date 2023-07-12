#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Implement linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
	if (array[i] == value)
		return (i);
	}
	return (-1);
}
