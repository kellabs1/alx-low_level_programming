#include "main.h"

/**
  * print_last_digit - This function prints the last digit of a number
  * @n: The entered
  *
  * Return: The last digit of a number
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');

	return (l);
}
