#include "main.h"
#include <stdio.h>
/**
 *print_array - Prints content of array
 *@n: Number of array elements
 *@a: Array to print
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");

}
