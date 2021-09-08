#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer to array
 * @n: array index
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	putchar('\n');
}
