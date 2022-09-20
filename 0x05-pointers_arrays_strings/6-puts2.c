#include "main.h"
/**
 *puts2 - Prints character strings two steps
 *
 *@str: string to increment by two
 *
 *Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(*(str + i));
		i += 2;

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
