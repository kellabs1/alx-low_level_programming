#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer to print
 *
 *Return: nothing
 */

void print_number(int n)
{
	unsigned int u = n; /* without u the code works but on the INT_MIN*/

	if (n < 0)
	{
		_putchar('-');
		u = -u;
	}

	if (u / 10)
		print_number(u / 10);   /*
					 *recursion: function receives each
					 * element of u  one by one
					 */

	_putchar((u % 10) + '0');
}
