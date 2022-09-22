#include "main.h"

/**
 * infinite_add - add two numbers together
 * @n1: first variable
 * @n2: second variable
 * @r: result buffer
 * @size_r: size of buffer
 *
 * Return: pointer to r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c;
	int l, m, n;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	m = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		n = m;
		if (a >= 0)
			n += n1[a] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (a < 0 && b < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[c] = n % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || m)
		return (0);
	for (c -= 1, l = 0; l < c; c--, l++)
	{
		m = r[c];
		r[c] = r[l];
		r[l] = m;
	}
	return (r);
}
