#include "main.h"
/**
 * times_table - print times table
 * Return: void
 */
void times_table(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			k *= i;
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
