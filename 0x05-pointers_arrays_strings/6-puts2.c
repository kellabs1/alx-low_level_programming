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
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
