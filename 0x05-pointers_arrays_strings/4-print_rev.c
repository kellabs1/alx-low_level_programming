#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints strings in reverse
 *@s: Pointer variable  that points to the string to be reversed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		c++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
