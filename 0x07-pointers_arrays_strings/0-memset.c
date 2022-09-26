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
	int i = 0;
	while (s[i] && i <= n)
	{
		s[i] = b;

		i++;
	}
	return s;
}
