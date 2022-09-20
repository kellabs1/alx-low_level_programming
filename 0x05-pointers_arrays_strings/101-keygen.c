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

	srand(time(NULL));
	int a, 
        int val = 0;
	for (a=100; a <= 3000; a += val)
	{
		val = (rand() % 92 + 30);

		printf("%c", val);
	}
	printf("%c", val);
	return (0);
}
