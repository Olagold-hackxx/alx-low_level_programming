#include <stddef.h>
#include "search_algos.h"
void printarray(int *array, int size, int start);
int binary_search_recursive(int *array, int firstIndex, int size, int value);


/**
 * binary_search - Implement linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}

int binary_search_recursive(int *array, int firstIndex, int size, int value)
{
	int mid;

    if (size >= firstIndex)
	{
        mid = firstIndex + (size - firstIndex) / 2;
		printarray(array, size, firstIndex);
        if (array[mid] == value)
            return mid;

        if (array[mid] > value)
            return binary_search_recursive(array, firstIndex, mid - 1, value);
		return binary_search_recursive(array, mid + 1, size, value);
	}
	return (-1);
}

void printarray(int *array, int size, int start)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= size; i++)
	{
		printf("%d", array[i]);
		if ((i + 1) <= size)
			printf(", ");
	}
	putchar('\n');
}
