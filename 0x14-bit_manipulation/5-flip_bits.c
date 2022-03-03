#include "main.h"

/**
 * flip_bits - find number of bits you need to flip in n to get m
 * @n: unsigned number whose bit was flipped to get m
 * @m: result of flipping some bits in n
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0;
	int i;

	for (i = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			j = j + 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (j);
}
