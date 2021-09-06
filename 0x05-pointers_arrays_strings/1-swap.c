#include "main.h"

/**
 * swap_int - swap arguments of variables
 * @a: pointer to variable
 * @b: pointer to variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
