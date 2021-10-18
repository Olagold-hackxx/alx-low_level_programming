#include <stdlib.h>

/**
 * array_iterator - func ptr iterate array
 * @array: array to print
 * @size: size of array
 * @action: func to print array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int elem;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		elem = array[i];
		action(elem);
	}
}
