#include "main.h"

/**
 * _sqrt - Return square root
 * @a: attempt at sqaure root
 * @b: Find square root of
 *
 * Return: Square root of c or -1
 */

int _sqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - Return square root
 * @n: Value
 *
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(1, n));
}

