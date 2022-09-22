#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @a: variable containing string to be changed
 *
 * Return: pointer to a
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] += (65 - 97);
	}

	return (s);
}
