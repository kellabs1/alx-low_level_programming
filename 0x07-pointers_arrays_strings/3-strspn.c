#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 *@s : string to check
 *@accept: string to accept
 *
 *Return: n of bytes in initial string that consists of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	i = j = k = 0;
	while (s[i])
	{
		j = 0;

		while (accept[j++])
		{
			if (accept[j] == s[i])
			{
				k++;
			}
		}
		i++;
	}
	return k;
}
