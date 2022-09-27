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
	int i, j, k;
	i = k = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j + 1])
			{
				return s;
				++k;
			}
			else if (k == 1)
			{
				return k;
			}
			*s++;
			j++;
		}
		i++;
	}
}
