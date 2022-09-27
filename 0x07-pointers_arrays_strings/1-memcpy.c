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
int j = 0;

while (src[j] && j <= n)
{
dest[j] = src[j];

j++;
}
return (dest);
}
