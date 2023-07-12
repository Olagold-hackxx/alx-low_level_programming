#include <stddef.h>
#include "search_algos.h"
void printarray(int *array, int size, int start);
int binary_search_recursive(int *array, int firstIndex, int size, int value);


/**
 * binary_search - Implement binary search algorithm
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

/**
 * binary_search_recursive - Implement binary search algorithm recursively
 * @array: array to search
 * @firstIndex: first index of array
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
*/
int binary_search_recursive(int *array, int firstIndex, int size, int value)
{
	int mid;

	if (size >= firstIndex)
	{
		mid = firstIndex + (size - firstIndex) / 2;
		printarray(array, size, firstIndex);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search_recursive(array, firstIndex, mid - 1, value));
		return (binary_search_recursive(array, mid + 1, size, value));
	}
	return (-1);
}


/**
 * printarray - Print array
 * @array: array to search
 * @size: size of array
 * @start: index to start prnting
*/
void printarray(int *array, int size, int start)
{
	int i;

	fputs("Searching in array: ", stdout);
	for (i = start; i <= size; i++)
	{
		fprintf(stdout, "%d", array[i]);
		if ((i + 1) <= size)
			fputs(", ", stdout);
	}
	putchar('\n');
}
