#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s:points to memory area to fill
 *@b:constant byte to copy
 *@n:number of bytes to copy
 *
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s[n] = b;
	return (s);
}
