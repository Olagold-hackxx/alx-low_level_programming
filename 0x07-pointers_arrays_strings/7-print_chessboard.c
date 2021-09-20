#include "main.h"

/**
 * print_chessboard - print 2D array
 * @a: pointer to array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
	}
}
