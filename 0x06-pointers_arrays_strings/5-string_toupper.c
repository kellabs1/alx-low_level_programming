#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 * @a: variable containing string to be changed
 *
 * Return: pointer to a
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
