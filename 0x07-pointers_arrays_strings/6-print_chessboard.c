#include "main.h"

/**
 * print_chessboard - prints an 8 by 8 chessboard.
 * @a: chessboard to print.
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
