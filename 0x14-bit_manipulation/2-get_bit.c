#include "main.h"

/**
 * get_bit - get bit at given index
 * @n: mumber whose bit we're looking for at given index
 * @index: given index
 * Return: the bi at the index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index > 64)
		return (0);
	for (i = 0; i < 64; i++)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
	}
	return (-1);
}

