#include "main.h"

/**
 * leet - encode string to 1337
 * @s: variable containing string to be encoded
 *
 * Return: encoded string variable
 */
char *leet(char *s)
{

	int i, j;

	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
