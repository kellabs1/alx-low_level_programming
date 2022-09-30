#include "main.h"

/**
  * _isdigit - Checks a character to see if it is a digit number
  * @x: The variable to hold the number to be checked
  *
  * Return: 1 for a digit character or 0 for any other character
  */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}

	return (0);
}
