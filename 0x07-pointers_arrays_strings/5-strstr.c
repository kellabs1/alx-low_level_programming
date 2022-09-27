#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j + 1])
			{
				return haystack;
			}
			*haystack++;
			j++;
		}
		i++;
	}
	return (0);
}
