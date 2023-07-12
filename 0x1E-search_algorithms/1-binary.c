#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Implement linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int mid = (size + 0) / 2;

	for (i = 0; i < size / 2; i++)
	{
		if (array[mid] == value)
			return (mid);
		else if (mid < value)
			mid = mid + 1;
		else
			mid = mid - 1;
	}
	return (-1);
}
