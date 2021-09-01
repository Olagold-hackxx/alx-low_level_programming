#include "main.h"
/**
 * times_table - print times table
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i * j; k < 82; k++)
			{
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
		}
		_putchar('\n');
	}
}
