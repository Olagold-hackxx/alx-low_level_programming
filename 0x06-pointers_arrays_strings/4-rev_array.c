#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int left = 0, right = n - 1, half = n / 2, temp;

	while (right >= half)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
