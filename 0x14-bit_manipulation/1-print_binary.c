#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: decimal number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
			_putchar((n & 1) + '0');

		}
		else
			_putchar (1 + '0');
	}
	else
	{
		_putchar ('0');
	}
}

