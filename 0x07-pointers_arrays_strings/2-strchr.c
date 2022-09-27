#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@c: character to search
 *@s: base string to check
 *
 *Return: Returns a pointer to the located character, null if else
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	if (s[i] == c)
	return (s + i);

	return (0);
}
