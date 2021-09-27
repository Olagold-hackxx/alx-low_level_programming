#include "main.h"
#include <stdlib.h>

/**
 * array_range - gets range of array in ascending order
 * and allocates memory
 * @min: minimum value
 * @max: maximum value
 * Return: array from min to max
 */

int *array_range(int min, int max)
{
	int *ptr, i, j = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(j * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		if (min < max)
			min++;
	}
	return (ptr);
}
