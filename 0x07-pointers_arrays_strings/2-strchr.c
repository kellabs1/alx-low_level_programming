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
	int i = 0;
	int j = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return s;
		}
		*s++;
	}
}
