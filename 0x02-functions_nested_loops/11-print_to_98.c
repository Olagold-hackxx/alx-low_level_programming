#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: print to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					if (n < -10)
					{
						_putchar(n + '0');
					}
					else
					{
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
					}
				}
				else
				{
					_putchar(n + '0');
				}
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
						
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

