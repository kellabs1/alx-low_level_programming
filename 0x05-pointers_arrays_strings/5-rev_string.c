#include "main.h"


/**
 *rev_string - reverses string
 *
 *@s: string to reverse
 *
 *Return: Nothing
 */

void rev_string(char *s)
{
	int i, j;
	char k, l;

	j = _strlen(s) - 1;
	i = 0;

	while (i < j)
	{
		k = s[i];
		l = s[j];
		s[i++] = l;
		s[j--] = k;
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
