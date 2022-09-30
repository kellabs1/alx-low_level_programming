#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string pointer variable
 * @s2: second string pointer variable
 *
 * Return: difference (s1 - s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
