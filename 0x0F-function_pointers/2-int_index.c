#include <stdlib.h>

/**
 * int_index - func ptr to get int index
 * @array: array to get its elem index
 * @size: size of array
 * @cmp: ptr to func to get elem index will be printed
 * Return: index of elem
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			;
		else
			return (i);
	}
	if (cmp(array[i]) == 0)
		return (-1);
	return (0);
}
