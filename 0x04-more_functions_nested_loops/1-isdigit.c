#include "main.h"

/**
 * _isdigit - Check for a digit
 *@c: Number of arguement
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	int is_digit = c >= 48 && c <= 57 ? 1 : 0;
	
	return (is_digit);
}
