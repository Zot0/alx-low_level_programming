#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: Value of digits
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	if (n < 10 && n > 0)
	{
		_puthchar (n);
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		if (n < 10 && n > 0)
		{
			_putchar (n);
			return (n);
		}
	}
	else
	{
	_putchar ((n %  10) + '0');
	}

	return (n % 10);
}
