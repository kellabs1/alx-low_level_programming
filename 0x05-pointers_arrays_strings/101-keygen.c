#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Generates random password
 *
 *Produces ASCII characters
 *
 *Return: 0
 */

int main(void)
{
	int n, p;

	srand(time(NULL));

	for (n = 2772; n >= 127; n -= p)
	{
		p = (rand() % 94 + 33);

		printf("%c", p);
	}
	printf("%c", p);
	return (0);
}
