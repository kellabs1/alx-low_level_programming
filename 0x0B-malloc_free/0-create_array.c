#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes array with a character
 * @size: size of the array
 * @c: initializing character
 *
 * Return: pointer to array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
