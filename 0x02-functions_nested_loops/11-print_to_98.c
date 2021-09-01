#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: int to print
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
	else
	{
		if (n > 98)
		{
			while (n > 98)
			{
				_putchar(n);
				n--;
			}
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
