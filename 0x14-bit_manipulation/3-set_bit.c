#include "main.h"

/**
 * set_bit - set bit at given index to 1
 * @n: number whose bit is to be changed at given index
 * @index: given index
 * Return: 1 on success -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = 1 << index;
	*n = *n | num;
	return (1);
}
