#include "main.h"

/**
 * reverse_array: reverses array
 * @a: pointer to array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, d = 0;
	int b[n + 1];

	for (i = n - 1; i >= 0 && d < n; i--, d++)
	{
		b[d] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
