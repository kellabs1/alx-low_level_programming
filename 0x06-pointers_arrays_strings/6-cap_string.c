#include "main.h"
/**
 *cap_string - capitalise every word
 *@s: string to be capilized
 *Return: return s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	
	char a[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
