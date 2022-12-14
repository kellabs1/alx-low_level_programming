#include <stdio.h>

/**
 *_atoi - String to integer converter
 *
 *@s: string to convert
 *
 *Return: integer
 */

int _atoi(char *s)
{
	int i, j, k;

	i = j = 0;
	k = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			k = -k;

		if ((s[i] >= '0') && (s[i] <= '9'))
			j = j * 10 + k * (s[i] - '0');

		else if (j != 0)
			break;
	}
		return (j);
}
