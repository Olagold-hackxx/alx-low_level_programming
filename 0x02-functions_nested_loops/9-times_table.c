#include "main.h"
/**
 * times_table - print times table
 * Return: void
 */
void times_table(void)
{
	int i, k;

	i = 0;
	k = 0;

	while (i < 10)
	{
		for (k < 10)
		{
			k *= i;
			if (k < 10)
			{
				_putchar(k);
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
