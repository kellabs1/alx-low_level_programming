#include "main.h"
#include <stdio.h>
/**
 * _strcpy - check the code
 *@desk: Variable to be copied to
 *@src: Variable from where to copy from
 *
 * Return: Pointer to string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((*(dest + i) = *src++))
	{
		i++;
	}
	return (dest);

}
