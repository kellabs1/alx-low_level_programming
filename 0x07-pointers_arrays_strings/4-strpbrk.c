#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 *@s : base string
 *@accept : string to test
 *
 *Return: Returns a pointer to the byte in s that matches
 *one of the bytes in accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		while (accept[j])
			break;
	}
		return (0);
}
