#include "main.h"

/**
 * _strcat - concatenate src with dest string
 * @dest: string pointer to serve as base
 * @src: string pointer variable to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i++))
		;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}