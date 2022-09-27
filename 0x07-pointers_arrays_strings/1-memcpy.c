#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination of copied bytes
 *@src: source of bytes
 *@n: number of bytes to copy
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];

	return (dest);
}
