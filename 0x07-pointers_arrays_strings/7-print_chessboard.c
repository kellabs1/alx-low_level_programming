#include "main.h"

/**
 * - prints chessboard ax8
 *
 *@a: Two dimensional array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);

			j++;
		}

		_putchar('\n');

		i++;
	}
}
