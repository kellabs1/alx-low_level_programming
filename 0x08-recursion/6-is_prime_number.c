#include "main.h"

int prime_check(int n, int i);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
  * prime_check - checks if number is prime
  * @n: number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite number
  */
int prime_check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (prime_check(n, i + 1));
}
