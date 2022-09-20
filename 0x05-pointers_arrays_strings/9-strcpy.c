#include "main.h"
#include <stdio.h>
/**
 * _strcpy - check the code
 *@desk: Variable to be copied to
 *@src: Variable from where to copy from
 *
 * Return: Pointer to string
 */
char _strcpy(char *desk, char *src)
{
	int i = 0; //= strlen(s) - 1;

	while (i < (strlen(src)))
	{
		*(desk + i) = *(src + i);
		i++;
	}
	return desk;
}
