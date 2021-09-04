#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print times table less than 15
 * greater than 0
 * @n: number tomprint time table to
 * Retutn: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) > 0)
				{
					if ((i * j) > 9)
					{
						printf(",  %d", i * j);
					}
					else
					{
						printf(",   %d", i * j);
					}
				}
				else
				{
					printf("%d", i * j);
					if (j != n && i == 0)
					{
						printf(",   ");
					}
				}
			}
			printf("\n");
		}
	}
}

