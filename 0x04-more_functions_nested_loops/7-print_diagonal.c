#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 48)
	{
		_putchar('\n');
	}
	for (i = 48; i < n; i++)
	{
		for (j = 48; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
