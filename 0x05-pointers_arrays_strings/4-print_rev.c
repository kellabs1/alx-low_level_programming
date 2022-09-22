#include "main.h"
/**
 * print_rev - Prints strings in reverse
 *@s: Pointer variable points to the string to reversed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{

	int i, c;

	c = _strlen(s);

		for (i = (c - 1); i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	_putchar('\n');
}

/**
 * _strlen - Returns Length of strings
 *@s: Pointer variable points to the string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
