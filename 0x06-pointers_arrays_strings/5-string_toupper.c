#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @a: variable containing string to be changed
 *
 * Return: pointer to a
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
