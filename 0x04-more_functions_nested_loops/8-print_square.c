#include "main.h"

/**
 * print_square - print squares
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 48)
	{
		_putchar('\n');
	}
	for (i = 48; i < size; i++)
	{
		for (j = 48; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
