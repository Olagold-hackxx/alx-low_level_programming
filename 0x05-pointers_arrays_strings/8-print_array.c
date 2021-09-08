#include "main.h"

/**
 * print_array - print array
 * @a: pointer to array
 * @n: array index
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	_putchar('\n');
}
