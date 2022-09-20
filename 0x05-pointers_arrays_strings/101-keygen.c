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
	int j, i;

	srand(time(NULL));

	for (j = 2772; j >= 127; j -= i)
	{
		i = (rand() % 94 + 33);

		printf("%c", i);
	}
	printf("%c", i);
	return (0);
}~
