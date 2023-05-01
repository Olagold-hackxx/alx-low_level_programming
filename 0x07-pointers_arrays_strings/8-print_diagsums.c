#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - get sum of both diagonals of a 2x2 matrix
 * @a: pointer to array
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int row, col, fwd_sum = 0, bwd_sum = 0;

	for (row = 0; row < size; row++)
	{
		for (col = row; col <= row; col++)
		{
			fwd_sum += *(a + ((row * size) + col));
		}
		for (col = (size - 1) - row; col >= (size - 1) - row; col--)
		{
			bwd_sum += *(a + ((row * size) + col));
		}
	}
	printf("%d, %d\n", fwd_sum, bwd_sum);
}
