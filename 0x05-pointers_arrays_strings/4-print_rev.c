#include "main.h"
#include <string.h>
/**
 * print_rev - Prints strings in reverse
 *@s: Pointer variable  that points to the string to be reversed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i < strlen(s))
	{
		//printf("%c", *(s+i));
		_putchar((*(s + i)));
		i--;
	}
	_putchar('\n');
}
