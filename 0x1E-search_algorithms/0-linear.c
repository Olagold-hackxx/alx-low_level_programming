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
	int i, length;

	if (array == NULL)
		return (-1);
	length = size - 1;
	for (i = 0; i < length + 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
