#include "main.h"
/**
 * _strncat - concatenate src to dest
 * @dest: base pointer variable
 * @src: pointer variable to append to dest
 * @n: number of bytes from src to append to dest
 *
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (*(dest + i++))
	{
		;
	}
	while ((*(dest + i++) = *(dest + j++)) && j <= n)
	{
		;
	}
	return (dest);
}
