#include "main.h"

/**
 * print_diagsums - get sum of both diagonals of a 2x2 matrix
 * @a: pointer to array
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, sum1 = 0, sum2 = 0, diag2 = 0, row = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == diag1 + (row * size))
			sum1 += a[i];
		if (i == (size - diag2 - 1) + (row * size))
			sum2 += a[i];
		if ((i + 1) % size == 0)
			row++, diag1++, diag2++;
	}
	printf("%d, %d\n", sum1, sum2);
}
