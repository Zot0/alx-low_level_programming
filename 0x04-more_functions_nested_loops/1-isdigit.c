#include "main.h"

/**
 * _isdigit - Check for a digit
 *@c: Number of arguement
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 10)
	{
		return (1);
	}
	return (0);
}
