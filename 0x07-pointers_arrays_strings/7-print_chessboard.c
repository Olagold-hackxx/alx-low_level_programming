#include "main.h"

/**
 * print_chessboard - print 2D array
 * @a: pointer to array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);

			if ((col + 1) % 8 == 0)
				_putchar('\n');
		}
}
