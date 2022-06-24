#include "main.h"

/**
 * _prime - Test for prime numbers
 * @a: Value of factors
 * @b: Value of prime numbers
 *
 * Return: 1 or 0 if not
 */

int _prime(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (_prime(a + 1, b));
	}
}

/**
 * is_prime_number - Test for a prime numbers
 * @n: Value to test
 *
 * Return: 1 or 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_prime(2, n));
}
