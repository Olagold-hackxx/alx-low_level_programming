#include "main.h"

/**
 * clear_bit - clear bit at given index to 0
 * @n: value given
 * @index: index given
 * Return: 1 on success -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);
	num = ~(1 << index);
	*n = *n & num;

	return (1);
}

