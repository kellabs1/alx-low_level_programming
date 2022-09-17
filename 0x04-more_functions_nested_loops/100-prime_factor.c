#include <stdio.h>
#include <math.h>

/**
  * main - Program prints the largest prime factor of 612852475143
  *
  * Return: 0
  */
int main(void)
{
	long x, max;
	long number = 612852475143;
	double s = sqrt(number);

	for (x = 1; x <= s; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}

	printf("%ld\n", max);

	return (0);
}
