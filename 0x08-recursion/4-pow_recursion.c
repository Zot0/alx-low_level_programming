#include "main.h"

/**
 * _pow_recursion - Returns the value of @x to power @y
 * @x: Power value
 * @y: Number of power
 *
 * Return: Value of x or -1 if y is 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
