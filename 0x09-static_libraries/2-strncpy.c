#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: string variable to copy to
 * @src: string variable to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
