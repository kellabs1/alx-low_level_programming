#include "main.h"
/**
 *print_array - Prints content of array
 *@n: Number of array elements
 *@a: Array to print
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int j = 0;
	while (j < n)
	{
		if (j <= (n - 2))
		{
			printf("%d,", *(a + j));
			printf(" ");
		}
		else if (j == n - 1)
		{
			printf("%d", *(a + j));
		}
		j++;
	}
}
