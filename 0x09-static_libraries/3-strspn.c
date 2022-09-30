#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 *@s : string to check
 *@accept: string to accept
 *
 *Return: n of bytes in initial string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				if (n == i)
				n++;
			}
		}
	}
	return (n);
}
