#include <stdio.h>

/**
 *main - prints the name of the program
 *@argc: number arguments supplied to the program
 *@argv: array of pointers to the arguments
 *
 *Return: 0
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
