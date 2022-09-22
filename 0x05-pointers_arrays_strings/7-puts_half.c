#include "main.h"
/**
 * puts_half - Print upper half of string
 *@str: Pointer variable that points to the string
 *
 * Return: void
 */


void puts_half(char *str)
{
	int i = _strlen(str);
	int j = 0;

	if (i % 2 == 0)
	{
		j = i / 2;

		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar('\n');
	}
	else
	{
		j = ((i + 1) / 2);
		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar('\n');
	}
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
