#include "main.h"

/**
  * print_line - Draws length of straight line depending on variable n
  * @n: Parameter for number of lines to be drawn
  *
  * Return: void
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
