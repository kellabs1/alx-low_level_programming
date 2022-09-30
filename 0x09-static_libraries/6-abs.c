#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: This is the variable that holds the number to be computed.
  *
  * Return: Absolute value of number
  */
int _abs(int c)
{
	if (c < 0)
	{
		int a;

		a = c * -1;

		return (a);
	}

	return (c);
}
